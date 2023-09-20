#include <stdio.h>
int chu_vi(int a, int b);
int dien_tich(int a, int b);

int main()
{
    int dai, rong;
    printf("\nHay nhap chieu dai, chieu rong cua hinh chu nhat : ");
    scanf("%d %d", &dai, &rong);
    printf("\n%d", chu_vi(dai, rong));
    printf("\n%d", dien_tich(dai, rong));
}

int chu_vi(int a, int b)
{
    int chu_vi;
    chu_vi = (a + b)*2;
    printf("\nChu vi la : ");
    return chu_vi;
}

int dien_tich(int a, int b)
{
    int dien_tich;
    dien_tich = a * b;
    printf("\nDien tich la : ");
    return dien_tich;
}