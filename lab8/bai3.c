#include <stdio.h>
#include <string.h>

struct SinhVien {
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
};

int main() {
    int n, i;
    struct SinhVien sv[50];
    char timMSSV[50];
    int found = 0;

    printf("Nhap so sinh vien: ");
    scanf("%d", &n);


    for (i = 0; i < n; i++) {
        printf("\nNhap MSSV: ");
        scanf("%s", sv[i].mssv);
        printf("Nhap TenSV: ");
        scanf("%s", sv[i].tenSV);
        printf("Nhap Nganh hoc: ");
        scanf("%s", sv[i].nganhHoc);
        printf("Nhap DiemTB: ");
        scanf("%f", &sv[i].diemTB);
    }

    printf("\nNhap MSSV can tim: ");
    scanf("%s", timMSSV);


    for (i = 0; i < n; i++) {
        if (strcmp(sv[i].mssv, timMSSV) == 0) {
            printf("\nThong tin sinh vien:\n");
            printf("MSSV: %s\n", sv[i].mssv);
            printf("TenSV: %s\n", sv[i].tenSV);
            printf("Nganh hoc: %s\n", sv[i].nganhHoc);
            printf("DiemTB: %.2f\n", sv[i].diemTB);
            found = 1;
            break; 
        }
    }


    if (found == 0) {
        printf("\nKhong tim thay sinh vien co MSSV %s\n", timMSSV);
    }

    return 0;
}

