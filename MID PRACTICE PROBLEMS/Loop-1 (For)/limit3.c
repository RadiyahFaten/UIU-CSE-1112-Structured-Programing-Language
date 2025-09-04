#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int j = 2; j <= n; j+= 2)
        printf("%d ", j);
}


