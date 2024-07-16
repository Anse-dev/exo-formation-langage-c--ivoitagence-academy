#include <stdio.h>

int main()
{
    int N;
    printf("Enter the amount in euros: ");
    scanf("%d", &N);

    if (N % 5 != 0)
    {
        printf("Error! The amount is not a multiple of 5.\n");
    }
    else
    {
        int bills20 = N / 20;
        N %= 20;
        int bills10 = N / 10;
        N %= 10;
        int bills5 = N / 5;

        printf("20 euro bills: %d\n", bills20);
        printf("10 euro bills: %d\n", bills10);
        printf("5 euro bills: %d\n", bills5);
    }

    return 0;
}