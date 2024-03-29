//Program to find roots of a quadriatic equations 
#include <math.h>
#include <stdio.h>
int main() 
{
    double a, b, c, discr, root1, root2, real, imag;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    discrt = b * b - 4 * a * c;
    if (discr > 0) {
        root1 = (-b + sqrt(discrt)) / (2 * a);
        root2 = (-b - sqrt(discr)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    else if (discr == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }
    else {
        real = -b / (2 * a);
        imag = sqrt(-discr) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", real, imag, real, imag);
    }
    return 0;
} 
