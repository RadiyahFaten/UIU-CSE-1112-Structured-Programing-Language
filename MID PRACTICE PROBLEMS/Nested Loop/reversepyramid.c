#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    /*for (int i = 1, star = 0 ; i <= n; i++, star++) {
        for( int j = 1; j <= star; j++) printf(" ");
        for (int j = 1; j <= n- star; j++) printf("*");

        for (int j = 2; j <= n - star; j++ ) printf("*");

        printf("\n");

    }*/

    for (int i = n ; i >= 1; i--) {
        for (int j = 1; j <= n - i ; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i) - 1; j++) {
            printf("*");
        }
        printf("\n");

    }
}
