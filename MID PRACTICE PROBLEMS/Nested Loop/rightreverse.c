#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1, star = 0; i <= n; i++, star++) {
        for (int j = 1; j <= star; j++) printf(" ");
        for (int j = 1; j <= n - star; j++) printf("*");

        printf("\n");
    }

}


