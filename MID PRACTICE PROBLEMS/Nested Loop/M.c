#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++ ) {
            if ( j == 1 || j == n) printf("*");
            else if ( i <= n / 2 + 1) {
                if ( i == j || (i + j == n + 1)) printf("*");
                else printf(" ");
            }
            else printf(" ");
        }
        printf("\n");
    }

}
