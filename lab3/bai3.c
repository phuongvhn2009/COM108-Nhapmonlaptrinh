#include <stdio.h>

    int main() {
        int a;
        float tien;
        printf("nhap so dien:");
        scanf("%d",&a);
        if (a <= 50) {
            tien = a * 1678;
            printf("so tien phai tra la: %f", tien);
        }
        else if (a <= 100) {
            tien = a * 1734;
            printf("so tien phai tra la: %f", tien);
        }
        else if (a <= 200) {
            tien = a * 2014;
            printf("so tien phai tra la: %f", tien);
        }
        else if (a <= 300) {
            tien = a * 2536;
            printf("so tien phai tra la: %f", tien);
        }
        else if (a <= 400) {
            tien = a * 2.834;
            printf("so tien phai tra la: %f", tien);
        }
        else {
            tien = a * 2927;
            printf("so tien phai tra la: %f", tien);
        }
    }
