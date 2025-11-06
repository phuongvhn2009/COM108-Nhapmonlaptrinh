#include <stdio.h>

int main(){

    int cn;

    do {

        int n,min,max,i,dem=0;
        float d=0,tb;


        printf(" Chuc nang 1: tinh trung binh cong\n");
        printf(" Chuc nang 2: tim so chinh phuong\n");
        printf(" Chuc nang 3: tim so nguyen to\n");
        printf(" Chuc nang 4: thoat\n");
        printf("Nhap chuc nang: ");
        scanf("%d", &cn);
        switch (cn)
        {
        case 1:
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
        
            
            printf("trung binh tong la: %f\n\n\n",tb);
            break;
        case 2:
            int d=0;
            scanf("%d",&n);
            i=2;
            while  (i<n){
                if(i%2==0){
                    d++;
                }
                i++;
            }
            
            if (n<0){
                printf("ko phai la so nguyen to\n\n");
            }
            else if (d==0){
                printf("%d la so nguyen to\n\n",n);
            }
            else if (d!=0) {
                printf("%d khong phai so nguyen to\n\n",n);
            }
            break;
        case 3:
            scanf("%d",&n);
            for (i=1;i<n;i++){
                if(i*i==n){
                    printf("So chinh phuong\n\n");
                    return 0;
                }
            }
            printf("Khong phai so chinh phuong\n\n");
            break;
        
        }
    } while (cn!=4);
    return 0;
}