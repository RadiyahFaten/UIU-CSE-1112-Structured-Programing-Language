#include <stdio.h>
int main()
{
    int n, rem, length = 0;
    scanf("%d", &n);

    for ( ; n !=0 ; length++)
    {
        n /= 10;

    }
    printf("Digit count = %d", length);
}
