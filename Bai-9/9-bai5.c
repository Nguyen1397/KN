#include <stdio.h>
void main()
{
    int a = 7, b, c;
    for (c = 1; c <= 7; )
    {
        c++;
        for (b = 1; b <= a; b++)
            printf("*");
        
        a--;
        printf("\n");
    }
}