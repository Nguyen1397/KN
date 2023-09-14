    /*          ECHO PROGRAM                                                 */
/* A program to accept input data from the console and print it on the scene*/
/* End of input data is indicated by pressing '^Z'*/
#include <stdio.h>
int main()
{
    char ch;
    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
    }
}