//program to find square root of number 
#include<stdio.h>
#include<math.h>
 
int main() {
     
    int n;
    double v;
     
    printf("Enter a Number: ");
    scanf("%d",&n);
     
    v = sqrt(n); //this functipn sqrt() is present in math.h header file..
     
    printf("Square Root of %d is %f",n,v);
     
}
