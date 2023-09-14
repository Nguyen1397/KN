#include <stdio.h>
void main()
{
    int a = 5, b, c;
    for (c = 1; c <= 5; )
    {
        c++;
        for (b = 1; b <= a; b++)
            printf("%d", b);
        
        a--;
        printf("\n");
    }
}