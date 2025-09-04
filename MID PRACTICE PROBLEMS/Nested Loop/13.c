#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int m = n - 1;
    for(int i = 1, k = 2 * m - 1 ; i <= n; i++, k -= 2) {
        for (int j = 1; j <= i; j++) printf("%d", j);

        for (int j = 1; j <= k; j++) printf(" ");

        if ( i != n) {
        for (int j = i; j >= 1; j-- ) {
                printf("%d", j);
        }
        }
        else {
            for (int j = i- 1; j >= 1; j-- ) {
                printf("%d", j);
        }
        }

        printf("\n");
    }

}
