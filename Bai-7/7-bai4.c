#include <stdio.h>
int main(){
    int Luong;
    char Loai;
    printf("Loai nhan vien: ");
    scanf("%c", &Loai);
    printf("\nLuong co ban la: ");
    scanf("%d", &Luong);
    switch(Loai)
    {
        case 'A':
          printf("\nLuong cuoi thang nhan duoc: %d", Luong + 300);
          break;
        case 'B':
          printf("\nLuong cuoi thang nhan duoc: %d", Luong + 250);
          break;
        default:
          printf("\nLuong cuoi thang nhan duoc: %d", Luong + 100);
          break;
    }
    return 0;
}