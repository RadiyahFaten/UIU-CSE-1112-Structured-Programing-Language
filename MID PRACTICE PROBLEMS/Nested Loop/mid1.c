#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int count = 1;
    for (int i = 1; i<= n ; i++) {
        for (int j = 1; j <= n; j++) {

       if (j <= n - i) printf(" ");
        else {
            printf("%d", count);
            if (count < n)  count++;
            else count = 1;
        }

        }
        printf("\n");

    }
}
