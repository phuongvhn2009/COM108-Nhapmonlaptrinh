#include <stdio.h>
#include <string.h>

int main(){
	char UserSys[]="Admin";
	char PassSys[]="12345";
	char user[100],pass[100];
	printf("nhap username: \n");
	gets(user);
	printf("nhap pass: \n");
	gets(pass);
	
	if (strcmp(UserSys,user) == 0 && strcmp(PassSys,pass) == 0) {
    	printf("dang nhap thanh cong");
	}else {
    	printf("dang nhap that bai");
	}

	return 0;
	
}
