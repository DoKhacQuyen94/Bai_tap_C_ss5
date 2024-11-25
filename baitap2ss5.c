#include<stdio.h>
int main(){
    int number = 9;
    int soBatKy;
    do{
        printf("Nhập số nguyên bất kì: ");
        scanf("%d",&soBatKy);
    }while(soBatKy!=number);
    return 0;
}