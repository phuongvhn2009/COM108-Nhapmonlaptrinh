#include <stdio.h>

void swap(int *a, int *b){ 
    int temp; 
    temp = *a;
    *a = *b;
    *b = temp;
    } 

int main(){ 
    int x, y; 
    printf("Nhap hai so x va y: "); 
    scanf("%d%d", &x, &y); 
 
    printf("Truoc khi hoan doi: x = %d, y = %d\n", x, y); 
    swap(&x, &y); 
    printf("Sau khi hoan doi: x = %d, y = %d\n", x, y); 
 
    return 0; 
}