#include <stdio.h>
int main(){
    double T, V, A, Sum;
    printf("Nhap diem toan, van, anh: ");
    scanf("%lf %lf %lf", &T, &V, &A);

//diem 1 mon bat ki ngoai khoang [0,10] -> ko hop le
    if(T < 0 || T > 10 || V < 0 || V > 10 || A < 0 || A > 10){ 
    	printf("Diem khong hop le");
    }

	else{
        Sum = 2*T + 2*V + A;
        if(Sum >= 40){
            printf("Pass");
        }else{
            printf("Fail");
        }
    }
    return 0;
}