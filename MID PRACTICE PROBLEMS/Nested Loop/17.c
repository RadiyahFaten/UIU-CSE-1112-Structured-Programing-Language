#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1, k = n / 2 + 1, l = n / 2 + 1; i <= n / 2 + 1; i++, k--, l++) {
        for (int j = 1; j <= n; j++) {
            if (i == n / 2 + 1 || j == n / 2 +1 || j == k || j == l) printf("$");
            else printf(" ");
        }
           printf("\n");
    }
     for (int i = 1, k = 2, l = n  - 1; i <= n / 2 ; i++, k++, l--) {
        for (int j = 1; j <= n; j++) {
            if ( j == n / 2 +1 || j == k || j == l) printf("$");
            else printf(" ");
        }


        printf("\n");
    }
}
