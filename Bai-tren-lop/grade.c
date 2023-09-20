#include <stdio.h>
char xep_loai(int a);

int main()
{
    int grade;
    printf("\nNhap diem cua sinh vien : ");
    scanf("%d", &grade);
    printf("\n%c", xep_loai(grade));
}

char xep_loai(int a)
{
    char g;
    if(a >= 90)
        g = 'A';
    else if(a < 90 && a >= 75)
        g = 'B';
    else if(a < 75 && a >= 50)
        g = 'C';
    else
        g = 'D';
    
    return g;
}