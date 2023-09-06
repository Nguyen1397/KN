#include <stdio.h>
int main(){
    int a, b;
    printf("Nhap vao 2 so a, b: ");
    scanf("%d %d", &a, &b);
    if(a % b == 0){
        printf("a chia het cho b");
    }
    else{
        printf("a khong chia het cho b");
    }
    return 0;
}