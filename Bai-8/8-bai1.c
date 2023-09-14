#include <stdio.h>
int main(){
    float x, y;
    x = 1500;
    y = 90;
    if(x < 2000 || x > 3000)
        printf("Value of x = %f", x);
    else
        printf("\nInvalid x");

    if(y > 100 && y < 500)
        printf("\nValue of y = %f", y);
    else
        printf("\nInvalid y");
}
