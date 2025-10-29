#include <stdio.h>
int main(){
    printf("nhap ban kinh hinh tron: ");
    float r;
    const float pi = 3.141592;
    scanf("%f", &r);
    printf("chu vi hinh tron la: %f\n", 2 * pi * r);
    printf("dien tich hinh tron la: %f\n", pi * r * r);
    return 0;
}
