#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    float a[n], sum = 0;
    for ( int i = 0; i < n; i++) scanf("%f", &a[i]);

    for ( int i = 0; i < n; i++) sum += a[i];

    printf("Average = %0.2f ", sum / n);

}
