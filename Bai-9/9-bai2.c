#include <stdio.h>
void main()
{
    int num1, num2, i, tong, a, b;
    tong = 0;
    printf("Nhap vao 2 so: ");
    scanf("%d %d", &num1, &num2);
    if(num1 < num2){
        a = num1;
        b = num2;
    }
    else{
        b = num1;
        a = num2;
    }

    for (i = a; i <= b; i++)
    {
        if(i % 2 == 0) continue;
        tong = tong + i;
    }
    printf("Tong cac so le giua 2 so la: %d", tong);
}   