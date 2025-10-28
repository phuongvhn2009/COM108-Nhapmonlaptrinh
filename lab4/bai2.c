#include <stdio.h>

    int main() {
        int n,i,d=0;
        scanf("%d",&n);
        for (i=2;i<n;i++) {
            if (n % i == 0) {
                d++;
            }
        }
        if (n==1){
            printf("1 khong phai so nguyen to");
        }
        else if (d==0){
            printf("%d la so nguyen to",n);
        }
        else if (d!=0) {
            printf("%d khong phai so nguyen to",n);
        }
    }
