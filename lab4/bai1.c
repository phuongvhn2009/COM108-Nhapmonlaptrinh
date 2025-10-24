#include <stdio.h>
    int main() {
        int min,max,i,dem=0;
        float d=0,tb;
        printf("Nhap gia tri min, max: ");
        scanf("%d%d",&min,&max);
        i=min;
        while (i<=max) {
            if (i % 2==0) {
                dem++;
                d=d+i;
            }
            i++;
        }
        if (dem >0){
            tb = d/dem;
        }
        else {
            tb = 0;
        }
        
        printf("trung binh tong la: %.2f",tb);
        return 0;
    }