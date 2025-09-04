#include <stdio.h>
int main()
{
    int n =0;
    scanf("%d", &n);
    float num =0, sum =0;

    for (int i = 0; i<n; i++)
    {
        scanf("%f", &num);
        sum += num;
    }
    printf("%f", sum / n );
}
