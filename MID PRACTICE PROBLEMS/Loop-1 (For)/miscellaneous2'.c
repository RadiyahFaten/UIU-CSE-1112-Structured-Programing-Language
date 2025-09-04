#include <stdio.h>
int main()
{
    int n = 0, r =0, nfactorial = 1, nMinusrfactorial = 1;
    scanf("%d %d", &n, &r);

    for ( int i = 0, j = n; i < n; i++, j-- )
        nfactorial =  nfactorial * j;
    for ( int i = 0, j = n- r; i < n - r; i++, j-- )
        nMinusrfactorial =  nMinusrfactorial * j;

       printf("The factorial is: %d ", nfactorial / nMinusrfactorial);
}

