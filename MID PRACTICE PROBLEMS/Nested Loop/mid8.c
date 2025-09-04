#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int m = n / 2 + 1;
    for (int i = 1, k = n; i <= m; i++, k -=2 ) {
        for (int j = 1; j <= i - 1; j++) printf(" ");

        for (int j = 1; j <= k ; j++) printf("*");

        printf("\n");
    }
}
