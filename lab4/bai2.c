#include <stdio.h>

    int main() {
        int n,i,d=0;
        scanf("%d",&n);
        for (i=2;i<=n;i++) {
            if (n % i == 0) {
                d++;
            }
        }
        if (d==0){
            printf("%d la so nguyen to",n);
        }
        else {
            printf("%d khong phai so nguyen to",n);
        }
    }