#include <stdio.h>
int main(){
    printf("nhap ban kinh hinh tron: ");
    float r, pi;
    pi = 3.14;
    scanf("%f", &r);
    printf("chu vi hinh tron la: %.2f\n", 2 * pi * r);
    printf("dien tich hinh tron la: %.2f\n", pi * r * r);
    return 0;
}