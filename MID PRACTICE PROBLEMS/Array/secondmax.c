#include<stdio.h>
#include <limits.h>
int second_highest(int a[], int n);

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max ) max = a[i];
    }

    int max2 = second_highest(a, n);

    printf("Max :%d\n2nd Max: %d", max, max2);


}

int second_highest(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max ) max = a[i];
    }

    int max2 = INT_MIN;
        for (int i = 1; i < n; i++) {
            if ( a[i] !=f max && max2 < a[i] ) max2 = a[i];
        }
    return max2;
}
