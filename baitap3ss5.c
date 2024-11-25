#include <stdio.h>
int main(){
    int n,sum;
    printf("Nhập số vòng lặp: ");
    scanf("%d",&n);
    for(int i =0; i<n;i++){
        // printf("%d",i);
        sum +=i;
    }
    printf("Tổng: %d",sum);
    return 0;
}