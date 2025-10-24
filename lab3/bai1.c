#include <stdio.h>
int main(){
    float a;
    scanf("%f", &a);
    if (a >=9){
        printf("xuat sac");
    }else if (a >=8){
        printf("gioi");
    }else if (a >=6.5){
        printf("kha");
    }else if (a >=5){
        printf("trung binh");
    }else{
        printf("yeu");
    }
    return 0;
}