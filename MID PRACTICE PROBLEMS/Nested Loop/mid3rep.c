#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int m = n - 1;
    for (int i = 1 ; i <= m; i++) {
        for (int j = 1; j <= m - i; j++) printf(" ");

        for (int j = 1, k = i ; j <= i ; j++, k--) printf("%d", k);

        for(int j = 2; j <= i; j++ ) printf("%d", j);

        printf("\n");
    }
}
