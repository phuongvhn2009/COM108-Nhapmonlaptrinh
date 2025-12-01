#include <stdio.h>

int main(){
	int n,i;
	
	printf("nhap so phan tu mang: ");
	scanf("%d",&n);
	int mang[n];
	
	for (i=0;i<n;i++){
		printf("\nmang[%d] = ",i);
		scanf("%d",&mang[i]);
	}
	
	int max=mang[0],min=mang[0];
	
	for (i=1;i<n;i++){
		if (mang[i]>max){
			max=mang[i];
		}
		if (mang[i]<min){
			min=mang[i];
		}
	}
	
	printf("so lon nhat la %d\n",max);
	printf("so nho nhat la %d",min);
	return 0;
}
