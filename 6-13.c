/* Chuong trinh trinh bay getchar() va putchar() */
#include <stdio.h>
void main()
{
    char letter;
    printf("You can enter a chatracter now: ");
    letter = getchar();
    putchar(letter);
}