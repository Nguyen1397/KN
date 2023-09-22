#include <stdio.h>
int sum1(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
float division(int a, int b);
void menu();

int main()
{
    int num1, num2;
    int check;
    printf("\nNhap so hang thu nhat: ");
    scanf("%d", &num1);
    printf("\nNhap so hang thu hai: ");
    scanf("%d", &num2);

    int sum = sum1(num1, num2);
    int sub = subtraction(num1, num2);
    int mtp = multiplication(num1, num2);
    float div = division(num1, num2);
    menu(num1, num2);
    printf("\nBan muon thuc hien phep tinh: ");
    scanf("%d", &check);
    switch ( check )
    {
        case 1:
            printf("Tong 2 so la : %d", sum);
            break;
        case 2:
            printf("Hieu 2 so la : %d", sub);
            break;
        case 3:
            printf("Tich 2 so la : %d", mtp);
            break;
        case 4:
            printf("Thuong 2 so la %f", div);
            break;
        default:
            printf("Da xay ra loi");
    }
}

int sum1(int a, int b)                      
{
    int c;
    c = a + b;
    return c;
}

int subtraction(int a, int b)                       
{
    int c;
    c = a - b;
    return c;
}

int multiplication(int a, int b)                  
{
    int c;
    c = a * b;
    return c;
}

float division(int a, int b)             
{
    float c;
    c = (float)a / b;
    return c;
}

void menu(int a, int b)
{
    printf("\nHai so vua nhap la : %d %d", a, b);
    printf("\n1.Tong");
    printf("\n2.Hieu");
    printf("\n3.Tich");
    printf("\n4.Thuong");
}