#include <stdio.h>
void main()
{
    int a, b;
    for (a = 1; a <= 9; a++)
    {
        printf("\n");
        for (b = 1; b <= a; b++)
            printf("%d", b);
    }
}