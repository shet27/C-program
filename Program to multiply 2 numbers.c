//program to multiply 2 numbers//
#include <stdio.h>
int main() 
{
    double l, m, product;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &l, &m);  
 
    // Calculating product
    product = l * m;

    // %.2lf displays number up to 2 decimal point
    printf("Product = %.2lf", product);
    
    return 0;
}
