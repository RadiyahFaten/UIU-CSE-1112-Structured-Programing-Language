#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1, k = 0; i <= n; i++, k++) {
        for (int j = 1; j <= n - k  ; j++) {
            printf("*");

        }
        printf("\n");
    }

}

