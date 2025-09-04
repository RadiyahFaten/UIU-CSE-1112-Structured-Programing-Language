#include <stdio.h>
int main()
{
    int n;
    float j = 0, sum = 0;
    scanf("%d", &n);

    for (int i =0; i < n; i++)
    {
        scanf("%f", &j);

        sum += j;

    }
    float avg = sum / n;
    printf("Average of %d inputs: %f", n, avg);
}
