#include <stdio.h>
    int main(){
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
        return 0;

    }
