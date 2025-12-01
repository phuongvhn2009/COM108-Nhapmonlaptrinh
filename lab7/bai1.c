#include <stdio.h>

int main(){
	char s[100];
	printf("nhap vao mot chuoi: ");
	gets(s);
	int i=0,n=0,p=0;
	
	while (s[i] != '\0'){
		if (s[i]=='a' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
			n++;
		}
		else{
			p++;
		}
		i++;
	}
	
	printf("\nchuoi %s co %d nguyen am va co %d phu am",s,n,p);
	return 0;
}
