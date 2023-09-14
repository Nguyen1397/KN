#include <stdio.h>
void main()
{
    char Name[10];
    int Age, a = 1;
    printf("Nhap ten: ");
    gets(Name);
    printf("Nhap tuoi cua nguoi do: " );
    scanf("%d", &Age);

    while (a <= Age)
    {
        puts(Name);
        a++;
    }
}