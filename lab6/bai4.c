#include <stdio.h>

int main(){
    int n, m;
    int i, j;

    printf("Nhap so hang: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);

    int mang[n][m];


    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("mang[%d][%d] = ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }


    printf("\nMa tran sau khi binh phuong:\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d ", mang[i][j] * mang[i][j]);
        }
        printf("\n");
    }

    return 0;
}

