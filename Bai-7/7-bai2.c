#include <stdio.h>
int main(){
    float a, b;
    printf("Nhap 2 so a, b ");
    scanf("%f %f", &a, &b);
    if(a*b > 1000)
        printf("Tich 2 so lon hon 1000");
    else if(a*b == 1000)
        printf("Tich 2 so bang 1000");
    else
        printf("Tich 2 so nho hon 1000");
    
    return 0;
}