#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int m = n / 2 + 1;
    for (int i = 1, k = 1; i <= m; i++, k += 2) {
        for (int j = 1; j <= m - i; j++) printf(" ");

        for (int j = 1; j <= k; j++) printf("*");

        printf("\n");
    }
    for (int i = 1, k = n - 2; i <= n / 2; i++, k -=2 ) {

        for (int j = 1; j<= i; j++) printf(" ");
        for (int j = 1; j<= k; j++) printf("*");

        printf("\n");
    }
}
