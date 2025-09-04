#include <stdio.h>
int main()
{
    int n, r, nfac = 1, nMinusrfac = 1;
    scanf("%d %d", &n, &r);

    for ( int i= 0, j = n; i < n; i++, j--)
    {
        printf("i = %d, ", i);
        printf("j = %d\n", j);
        nfac = nfac * j;
    }
        printf("\n");
     for ( int i= 0, j = n - r; i < n - r; i++, j--)
    {
        printf("i = %d, ", i);
        printf("j = %d\n", j);
        nMinusrfac = nMinusrfac * j;
    }

        printf(" Permutation = %d", nfac / nMinusrfac );
    }
