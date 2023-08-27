#include <stdio.h>
int main(){
    float a, b, C, S;
    printf("Nhap chieu dai, chieu rong :");
    scanf("%f %f", &a, &b);
    C = (a + b)*2;
    S = a * b;
    printf("Chu vi hinh chu nhat la : %f\n", C);
    printf("Dien tich hinh chu nhat la : %f", S);
    return 0;
}6