#include <stdio.h>

int main() {
    int n, i, d = 0;
    scanf("%d", &n);

    if (n < 2) {
        printf("khong phai so nguyen to");
        return 0;
    }

    for (i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            d = 1; 
            break;
        }
    }

    if (d == 0)
        printf("%d la so nguyen to", n);
    else
        printf("%d khong phai so nguyen to", n);

    return 0;
}

