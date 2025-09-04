#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    for ( ; x < y ; x++)
    {
        printf("%d, ", x*x);
    }
     for ( ; x > y ; x--)
    {
        printf("%d, ", x*x);

    }
     for ( ; x == y ; )
    {
        printf("Reached!");
        break;
    }
}
