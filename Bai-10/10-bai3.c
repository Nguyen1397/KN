#include <stdio.h>
void main()
{
    int a, b = 1;
    printf("Nhap 1 so bat ki: ");
    scanf("%d", &a);
    while (b <= 10)
    {
        printf("\n%d * %d = %d", a, b, a*b);
        b++;
    }
}