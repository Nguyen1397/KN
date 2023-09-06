#include <stdio.h>
int main(){
    float a, b, c;
    printf("Nhap 2 so a va b ");
    scanf("%f %f", &a, &b);
    if(b >= a)
        c = b - a;
    else
        c = a - b;
    
    if(c == a){
        printf("Hieu bang gia tri %f vua nhap", a);
    }else if(c == b){
        printf("Hieu bang gia tri %f vua nhap", b);
    }
    else 
        printf("Hieu khong bang gia tri nao vua nhap");
    
    return 0;
}