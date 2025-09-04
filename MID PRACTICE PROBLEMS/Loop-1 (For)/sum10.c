#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 0, j =2, k = 5; i < n; i++, j*= 2, k += 3)
       sum = sum + j * k;

     printf("%d ", sum);
}
