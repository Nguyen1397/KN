#include <stdio.h>

int main()
{
    int arr[5], i, max, min, sum = 0;
    float avg;

    for (i = 0; i < 5; i++)
    {
        printf("\nNhap gia tri phan tu thu %d :", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = (float)sum / 2;
    max = arr[0];
    min = arr[0];

    for (i = 1; i < 5; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("\nMax = %d ", max);
    printf("\nMin = %d ", min);
    printf("\nSum = %d ", sum);
    printf("\nAverage = %f", avg);

    for (i = 4; i >= 0; i--)
    {
        printf("\n%d", arr[i]);
    }
}