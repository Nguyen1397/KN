#include <stdio.h>
int main(){
    float r, h, v;
    printf("Nhap ban kinh day va chieu cao hinh tru: ");
    scanf("%f %f", &r, &h);
    v = r * r * 3.14 * h;
    printf("The tich hinh tru la : %f", v);
    return 0;
}