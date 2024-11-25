#include<stdio.h>
int main(){
    int n;
    printf("Nhập số nguyên bất kì (1-10):");
    scanf("%d",&n);
    if (n <0 || n>10){
        printf("Nhập số nguyên không hợp lệ");
        return 1;
    }else{
        printf("bảng cửu chương của %d \n",n);
        for(int i=1;i<=10;i++){
            printf("%d x %d = %d \n",n,i,n*i);
        }
    }
    return 0;
}