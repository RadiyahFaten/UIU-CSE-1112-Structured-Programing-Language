#include <stdio.h>
#include <math.h>
int main()
{
    int n, n_n, n_len, length = 0, sum =0, rem =0;
    scanf("%d", &n);
    n_len = n;
    n_n =n;
    for (; n_len != 0 ; length++)
    {
        n_len /= 10;
    }
    printf("Length= %d\n", length);

    for ( ; n_n != 0 ;)
    {
        rem = n_n % 10;
        sum = sum + pow (rem, length);
        n_n /= 10;
    }
    if ( n == sum) printf("Amstrong");
        else printf("Not");

}
