#include <stdio.h>

int Max(int a,int b,int c){
	int max=a;
	if (b>max){
		max=b;
	}
	if (c>max){
		max=c;
	}
	return max;
}

int main(){
	int a,b,c;
	printf("nhap ba so a b c:\n");
	scanf("%d%d%d",&a,&b,&c);
	
}
