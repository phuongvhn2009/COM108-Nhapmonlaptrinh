#include <stdio.h>
#include <string.h>

struct SinhVien {
    char maSV[10];
    char hoTen[50];
    float dtb;
};

int main(){
    struct SinhVien SV1, SV2;
    SV1.dtb = 8.5;
    strcpy(SV1.maSV, "SV001");
    strcpy(SV1.hoTen, "Tran Van Nam");
    printf("MaSV:%s, \nHo Ten:%s, \nDTB:%f", SV1.maSV, SV1.hoTen, SV1.dtb);

    return 0;
}
