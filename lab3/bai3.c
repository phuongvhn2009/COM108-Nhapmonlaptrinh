#include <stdio.h>
#include <math.h>

int main() {
    int a;
    printf("Nhap 1 -> 3: ");
    scanf("%d", &a);
    switch (a) {
        case 1: {
            float a;
            scanf("%f", &a);
            if (a >=9){
                printf("xuat sac");
            }else if (a >=8){
                printf("gioi");
            }else if (a >=6.5){
                printf("kha");
            }else if (a >=5){
                printf("trung binh");
            }else{
                printf("yeu");
            }
                }
            break;
        case 2: {
            printf("nhap a ,b cho ham so bac nhat (a*x + b = 0): ");
            float a, b;
            scanf("%f%f", &a, &b);
            if (a == 0){
                if (b == 0){
                    printf("phuong trinh vo so nghiem");
                }else{
                    printf("phuong trinh vo nghiem");
                }
            } 
            else{
                printf("phuong trinh co nghiem x = %.2f", -b/a);
            }
        }
            break;
        case 3: {
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
        }
            break;
    }

    return 0;
}