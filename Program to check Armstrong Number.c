//program to check armstrong number or not
#include <stdio.h>
int main() 
{
    int num, m, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    m = num;

    while (m != 0) 
    {
        remainder = m % 10;
        
       result += remainder * remainder * remainder;
       m /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
