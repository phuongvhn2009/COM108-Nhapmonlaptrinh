#include <stdio.h>

int main(){
    int n,i,j,tg;
    
    printf("Nhap so phan tu mang: ");
    scanf("%d",&n);
    int mang[n];
    
    for (i=0;i<n;i++){
        printf("mang[%d] = ",i);
        scanf("%d",&mang[i]);
    }
    
    printf("\nMang truoc khi sap xep:\n");
    for (i=0;i<n;i++){
        printf("%d ",mang[i]);
    }
    

    for (i=0;i<n-1;i++){
        for (j=i+1;j<n;j++){
            if(mang[i]<mang[j]){
                tg = mang[i];
                mang[i] = mang[j];
                mang[j] = tg;
            }
        }
    }
    
    printf("\nMang sau khi sap xep:\n");
    for (i=0;i<n;i++){
        printf("%d ",mang[i]);
    }
    
    return 0;
}

