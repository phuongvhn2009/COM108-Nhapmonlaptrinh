#include <stdio.h>
#include <string.h>


struct SinhVien {
    char mssv[100];
    char hoten[100];
    float dtb;
};

int main() {
    struct SinhVien mangSV[100]; 
    int n, i;

    printf("Nhap so sinh vien: ");
    scanf("%d", &n);

  
    for (i = 0; i < n; i++) {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);

        printf("MSSV: ");
        scanf("%s", mangSV[i].mssv);

        printf("Ho ten: ");
        scanf("%s", mangSV[i].hoten);

        printf("Diem TB: ");
        scanf("%f", &mangSV[i].dtb);
    }
    return 0;
}
