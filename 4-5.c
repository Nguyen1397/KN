#include <stdio.h>
int main(){
    float L, DA, PF, IT;
    int HRA = 150, TA = 120, K = 450;
    DA = 0.12 * 12000;
    PF = 0.14 * 12000;
    IT = 0.15 * 12000;
    L = 12000 + DA + HRA + TA + K - (PF + IT);
    printf("Luong thuc lanh : %f", L);
    return 0;
}