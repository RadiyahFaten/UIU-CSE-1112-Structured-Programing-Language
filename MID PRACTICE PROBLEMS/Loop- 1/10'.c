#include<stdio.h>
int main()
{
    int n, j = 1, sum = 0;
    scanf("%d", &n);

    for (int i = 0, j = 1; i < n; i++, j++)
    {
        if ( j % 2 == 0)
            j *= (-1);
        sum = sum + j;

    }
    printf("Result: %d", sum);
}
