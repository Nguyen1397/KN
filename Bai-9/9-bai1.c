#include <stdio.h>
void main()
{
    int i;
    for(i = 100; i >= 5; i--)
    {
        if(i % 5 != 0) continue;
        printf("\n%d", i);
    }
}