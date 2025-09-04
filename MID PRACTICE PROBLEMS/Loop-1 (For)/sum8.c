#include <stdio.h>
#include <math.h>
int main()
{
    int n =0, sum =0;
    printf("Enter a value:");
    scanf("%d", &n);

    for (int i =1,  j = 1; i <= n; i++, j ++ ) {

        //printf("Loop iteration number:%d ", i); i tracks loop iteration
        //printf("Repeated number:%d\n", j ); j tracks the series
        sum = sum + pow( j, 2);

    }
        printf("%d ", sum);
}

