#include <stdio.h>

int main()
{
    int n = 0, sum = 0;
    scanf("%d", &n);

    for (int i = 0, j = 1, k = 2; i < n; i++, j++, k++)
    {
        sum = sum + j*j*k;

    }
    printf("%d", sum);
}
