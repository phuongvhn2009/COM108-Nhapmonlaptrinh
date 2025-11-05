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
        
        tb = d/dem;
     
        
        printf("trung binh tong la: %f",tb);
        return 0;
    }
