#include <math.h>
#include <stdio.h>
 int main(){
    printf("nhap he so a b c cho phuong trinh bac 2 (a*x^2 + b*x + c = 0): ");
    float a, b, c, d, x1, x2;
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0){
        if (b == 0){
            if (c == 0){
                printf("phuong trinh vo so nghiem");
            }else{
                printf("phuong trinh vo nghiem");
            }
        } 
        else{
            printf("phuong trinh co nghiem x = %.2f", -c/b);
        }
    }
    else{
        d = b*b - 4*a*c;
        if (d < 0){
            printf("phuong trinh vo nghiem");
        }else if (d == 0){
            printf("phuong trinh co nghiem kep x1 = x2 = %.2f", -b/(2*a));
        }else{
            x1 = (-b + sqrt(d)) / (2*a);
            x2 = (-b - sqrt(d)) / (2*a);
            printf("phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f", x2);
        }
    }
    return 0;
 }