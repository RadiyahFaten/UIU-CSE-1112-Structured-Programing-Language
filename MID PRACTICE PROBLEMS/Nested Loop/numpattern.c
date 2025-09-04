#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int m = n / 2 + 1;

    for( int i = 0 , k = -1, l = m; i < m; i++, k+= 2, l-- ) {
        for (int j = 1; j <= m - i; j++ ) printf("%d", j);

        if ( i != 0 ) {
        for (int j = 1; j <= k ; j++) printf("_");
        }

        if ( i != 0 ) {
        for (int j = l; j >= 1; j-- ) printf("%d", j );
        }
        else {
            for (int j = l - 1; j >= 1; j-- ) printf("%d", j );
        }
        printf("\n");
    }

    for (int i = 1, k = 2, l = n - 4; i <= m - 1; i++, k++, l-= 2) {
        for (int j = 1; j <= k; j++) printf("%d", j);


            for (int j = l; j >= 1; j-- ) printf("_");

        if ( i != m - 1) {
            for (int j = k; j >= 1; j-- ) printf("%d", j);
        }
        else {
            for (int j = k - 1; j >= 1; j-- ) printf("%d", j);
        }
        printf("\n");
    }


}
