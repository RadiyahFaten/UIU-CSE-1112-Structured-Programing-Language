#include<stdio.h>

 int main()
{
    int n;
    do {
        scanf("%d", &n);
    }
    while( n % 2 == 0 || n < 5 );

    for (int i = 1; i <= n; i++) {
        for ( int j = 1; j <= n; j++) {
            if ( i == 1 || i == n || j == 1 || ( i == n / 2 + 1)) printf("*");
            else if ( i > n / 2 + 1 ) {
                if ( j == n) printf("*");
                else printf(" ");
            }
        }
             printf("\n");
    }
}
