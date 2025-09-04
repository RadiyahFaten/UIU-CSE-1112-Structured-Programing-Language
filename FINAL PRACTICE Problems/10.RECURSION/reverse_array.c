#include<stdio.h>
void reverse_array(int a[], int n)
{
    if ( n == 0 ) return;
    printf("%d ", a[n - 1]);
    reverse_array(a, n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    reverse_array(a, n);
}
