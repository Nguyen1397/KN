#include <stdio.h>
void  main()
{
    int i = 1, a = 1 ;
    printf("%d", i);
    printf(" %d", i);
    
    for (i = 2 ;i > 0 && i < 1000 ; i = i + a){
        a = i - a;
        printf(" %d", a);
        
    }
}