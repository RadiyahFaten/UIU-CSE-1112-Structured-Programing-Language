#include <stdio.h>
int main()
{
    int n, rem = 0;
    scanf("%d", &n);

    for ( ; n != 0 ; )
    {
        rem = n % 10;
        printf("%d", rem);
        n /= 10;
    }
}
