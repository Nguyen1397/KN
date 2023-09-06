#include <stdio.h>
int main(){
    int num;
    printf("Nhap diem cua sinh vien :\n");
    scanf("%d", &num);
    printf("Diem cua sinh vien la: %d\n", num);
    if(num >= 75)
        printf("Sinh vien loai A");

    else if(num < 75 && num >= 60)
        printf("Sinh vien loai B");

    else if(num < 60 && num >= 45)
        printf("Sinh vien loai C");

    else if(num < 45 && num >= 35)
        printf("Sinh vien loai D");

    else if(num < 35)
        printf("Sinh vien loai E");

    else
        printf("Diem khong hop le");

    return 0;       
}