#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int j = 10; j <= n; j *= 3)
        printf("%d ", j);
}

