#include  <stdio.h>

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

int checkYear(int year){ 

    int flag=0; 
    if(year % 400 == 0) 
        flag = 1; 
 
    if(year % 4 == 0 && year % 100 != 0) 
        flag = 1; 
 
    return flag; 
}

void swap(int *a, int *b){ 
    int temp; 
    temp = *a;
    *a = *b;
    *b = temp;
    }

int main(){
	int chon;
	do {
		printf("-------------------MENU---------------------\n");
		printf("chuc nang 1: tim so lon nhat trong 3 so\n");
		printf("chuc nang 2: tinh nam nhuan\n");
		printf("chuc nang 3: hoan vi 2 so\n");
		printf("chuc nang 4: thoat\n\n");
		
		scanf("%d",&chon);
		
		int a,b,c;
		int year; 
		int x, y;
		
		switch(chon){
            case 1:                                                            
                printf("nhap ba so a b c:\n");
                scanf("%d%d%d",&a,&b,&c);
                printf("so lon nhat la: %d\n\n",Max(a,b,c));
                break;

            case 2:    
                printf("Nhap nam: "); 
                scanf("%d", &year); 
                if(checkYear(year)) 
                    printf("%d la nam nhuan\n", year); 
                else
                    printf("%d khong phai la nam nhuan\n", year);
                break;

            case 3:
                printf("Nhap hai so x va y: "); 
                scanf("%d%d", &x, &y); 
                printf("\nTruoc khi hoan doi: x = %d, y = %d\n", x, y); 
                swap(&x, &y); 
                printf("Sau khi hoan doi: x = %d, y = %d\n", x, y);
                break;
}
			    
	}while(chon!=4);
}
