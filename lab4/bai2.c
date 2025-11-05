#include <stdio.h>

    int main() {
        int n,i,d=0;
        scanf("%d",&n);
        i=2;
        while  (i<n){
        	if(i%2==0){
        		d++;
			}
			i++;
		}
        
        if (n<0){
            printf("ko phai la so nguyen to");
        }
        else if (d==0){
            printf("%d la so nguyen to",n);
        }
        else if (d!=0) {
            printf("%d khong phai so nguyen to",n);
        }
    }
