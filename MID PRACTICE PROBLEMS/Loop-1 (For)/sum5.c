#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 0, j =1; sum < n ; i++, j*= 2)
        sum = sum + j;

    printf("%d", sum);


}
