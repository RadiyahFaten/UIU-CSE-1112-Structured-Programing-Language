#include<stdio.h>

void odd_even(int n);

int main()
{
    int num;
    scanf("%d", &num);
    odd_even(num);
}

void odd_even(int n)
{
    if ( n % 2 == 0 ) printf("Even");
    else printf("Odd");
}
