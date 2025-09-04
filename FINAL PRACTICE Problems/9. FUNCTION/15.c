#include<stdio.h>
int minimum_value( int n, int arr[]);
int maximum_value( int n, int arr[]);

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int min = minimum_value(n, a);
    printf("Minimum value: %d\n", min);

    int max = maximum_value(n, a);
    printf("Maximum value: %d", max);

}

int minimum_value( int n, int arr[])
{
    int min = arr[0];
    for ( int i = 0; i < n; i++ ) {
        if (min > arr[i] ) min = arr[i];
    }
    return min;
}

int maximum_value( int n, int arr[])
{
    int max = arr[0];
    for ( int i = 0; i < n; i++ ) {
        if (max < arr[i] ) max = arr[i];
    }
    return max;
}
