#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1, j = 1; i <= n; i++, j+= 2 ) {
        printf("%d", j);
        if ( i != n ) printf(",");
    }
}
