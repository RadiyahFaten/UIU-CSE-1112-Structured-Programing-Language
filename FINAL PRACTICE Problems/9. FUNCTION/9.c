#include<stdio.h>
int factorial(int n);
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", factorial(n));

}

int factorial(int n)
{
    int fac = 1;
    for (int i = n; i >= 1; i--) fac *= i;
    return fac;

}
