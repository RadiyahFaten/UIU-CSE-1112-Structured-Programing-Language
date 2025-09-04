#include <stdio.h>
int main()
{
    int n, r, nfac = 1, nMinusrfac = 1, rfac =1;
    scanf("%d %d", &n, &r);

    for ( int i = 0, j = n; i < n; i++, j--)
    {
        nfac = nfac * j;
    }
    for ( int i = 0, j = r; i < r; i++, j--)
    {
        rfac = rfac * j;
    }
    for ( int i = 0, j = n-r ; i < n-r; i++, j--)
    {
        nMinusrfac = nMinusrfac * j;
    }

    int result = nfac / ( rfac * nMinusrfac);
    printf("%d", result);
}
