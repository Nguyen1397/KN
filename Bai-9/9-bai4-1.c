#include <stdio.h>
void main()
{
    int a = 6, b, c;
    for (b = 1; b < a; b++)
    {
        printf("\n");
        for (c = 1; c <= b; c++)
            printf("%d", c);
    }

}