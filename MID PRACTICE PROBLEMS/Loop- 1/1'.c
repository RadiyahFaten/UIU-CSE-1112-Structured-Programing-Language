#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);

    for ( int i= 1, j =1; i <= n; i++, j++)
    {
        printf("%d", j);

        if (i != n ) printf(",");
    }

}
