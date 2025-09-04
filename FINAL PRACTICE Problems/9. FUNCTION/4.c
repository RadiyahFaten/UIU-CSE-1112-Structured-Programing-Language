#include<stdio.h>

void is_positive(int n);

int main()
{
    int num;
    scanf("%d", &num);
    is_positive(num);
}

void is_positive(int n)
{
    if ( n > 0 ) printf("Positive");
    else if ( n < 0) printf("Negative");
    else printf("Zero");
}
