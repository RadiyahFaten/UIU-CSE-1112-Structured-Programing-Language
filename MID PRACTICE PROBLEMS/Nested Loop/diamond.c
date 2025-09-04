#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++ ) printf(" ");
        for (int j = 1; j <= i; j++ ) printf("*");

        for (int j = 2; j<= i; j++) printf("*");

        printf("\n");
    }
        int r = n - 1;

    for (int i = 1, star = 1 ; i <= r; i++, star++) {
        for( int j = 1; j <= star; j++) printf(" ");
        for (int j = 1; j <= n - star; j++) printf("*");

        for (int j = 2; j <= n - star; j++ ) printf("*");

        printf("\n");

    }

}
