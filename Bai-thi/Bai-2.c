#include <stdio.h>
int main()
{
    int arr[10];
    int i;
    printf("Hay nhap 10 so nguyen");
    for (i = 0; i < 10; i++)
    {
        printf("\nNhap so thu %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Day so theo thu tu nguoc lai :");
    for (i = 9; i >= 0; i--)
    {
        printf("\n%d", arr[i]);
    }
}