#include <stdio.h> 
	int main(){
		float a,b;
		printf("nhap can nang (kg): ");
		scanf("%f",&a);
		printf("\nnhap chieu cao (m): ");
		scanf("%f",&b);
		printf("chi so BMI la: %.1f",a/(b*b));
		return 0;
	}
