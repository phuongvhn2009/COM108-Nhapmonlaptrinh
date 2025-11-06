#include <stdio.h>

int main(){
	int n,i;
	scanf("%d",&n);
	for (i=1;i<n;i++){
		if(i*i==n){
			printf("So chinh phuong");
			return 0;
		}
	}
	printf("Khong phai so chinh phuong");
	return 0;
}
