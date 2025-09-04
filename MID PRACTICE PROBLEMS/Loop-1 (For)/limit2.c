#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int j = 1;  j <= n;  j+= 2) //j indicates the iteration and the upper limit to print,
        printf("%d ", j);
}

