#include <stdio.h>
int main()
{
    int n =0, sum =0;
    printf("Enter a value:");
    scanf("%d", &n);

    for (int i =1,  j = 10; i <= n; i++, j *= 3 ) {

        //printf("Loop iteration number:%d ", i); i tracks loop iteration
        //printf("Repeated number:%d\n", j ); j tracks the series
        sum = sum + j;

    }
        printf("%d ", sum);
}

