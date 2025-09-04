#include<stdio.h>
void print_array (int a[], int n)
{
    if ( n == 0 ) return;

    print_array(a , n - 1);
    printf("%d ", a[n - 1]);
}


int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    print_array(a, n);
}
