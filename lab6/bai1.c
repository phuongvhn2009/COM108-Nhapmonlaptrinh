#include <stdio.h>

int main(){
	
	int n,i;
	printf("Nhap so phan tu mang: ");
	scanf("%d",&n);
	int mang[n];
	
	for (i=0;i<n;i++){
		printf("\na[%d]= ",i);
		scanf("%d",&mang[i]);
		}
	
	float tong=0,tb;
	int dem=0;
	
	for (i=0;i<=n;i++){
		if(mang[i] %3 ==0){
			tong=tong+mang[i];
			dem++;
		}
	}
	
	tb=tong/dem;
	printf("\ntrung binh cong cua mang la: %f",tb);
	
	return 0;
}
