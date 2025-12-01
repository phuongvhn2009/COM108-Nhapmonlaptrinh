#include <stdio.h>
#include <string.h>

struct SinhVien {
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
};

int main() {
    int n, i, j;
    struct SinhVien sv[50], temp;

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


    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (sv[i].diemTB > sv[j].diemTB) {
                temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }

    printf("\nDanh sach sinh vien sau khi sap xep:\n");
    for (i = 0; i < n; i++) {
        printf("%s - %s - %s - %.2f\n",
               sv[i].mssv, sv[i].tenSV, sv[i].nganhHoc, sv[i].diemTB);
    }

    return 0;
}

