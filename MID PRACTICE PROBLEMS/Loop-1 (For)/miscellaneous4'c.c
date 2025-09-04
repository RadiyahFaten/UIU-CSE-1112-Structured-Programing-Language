#include <stdio.h>
int main()
{
    int n = 0, flag =0;
    scanf("%d", &n);

    for (int i = 1, j =2; i < n - 2; i++, j++)
    {
        if ( n % j == 0)
        flag = 1;

    }
    if (flag == 1) printf("Not prime");
    else printf("prime");
}
