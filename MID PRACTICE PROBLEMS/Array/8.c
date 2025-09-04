#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int max = a[0];
    for (int i = 0; i < n; i++) {

        if ( a[i] > max) max = a[i];
    }
    printf("Max: %d", max);

    int min = a[0];
    for (int i = 0; i < n; i++) {

        if ( a[i] < min) max = a[i];
    }
    printf("Min: %d", min);

}
