//Program to convert binary to decimal
#include <stdio.h>

int main()
{
    int bin, deci= 0, base = 1, rem;
    
    printf("Enter the Binary Number = ");
    scanf("%d", &bin);

    int temp = bin;
    while(temp > 0)
    {
        rem = temp % 10;
        deci = deci + rem * base;
        temp = temp / 10;
        base = base * 2;
    }

    printf("The Binary Value  = %d\n", bin);
    printf("The Decimal Value = %d\n", deci);

    return 0;
}
