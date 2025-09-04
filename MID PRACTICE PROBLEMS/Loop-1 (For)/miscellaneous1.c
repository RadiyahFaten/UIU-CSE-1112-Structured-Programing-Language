#include <stdio.h>
int main()
{
    int n, factorial = 1;
    scanf("%d", &n);

    for ( int i = 0, j = n; i < n; i++, j--) {

        printf("i = %d, ", i);
        printf("j = %d\n", j);
        factorial = factorial * j;
    }
    printf("Factorial = %d", factorial);
}
