#include<stdio.h>

int summation( int n )
{
    printf("%d: How are you?\n", n);
    if ( n == 0 ) return 0;
    printf("%d: I am fine\n", n);
    return n + summation( n - 1 );
}

int main()
{
    int n;
    scanf("%d", &n);
    int sum = summation(n);
    printf("%d", sum);
}
