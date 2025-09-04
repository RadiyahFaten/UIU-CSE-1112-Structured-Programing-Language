#include<stdio.h>
#include<math.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 0, j =1; i < n; i++, j++)
       sum = sum + pow(j, 2);

     printf("%d ", sum);
}

