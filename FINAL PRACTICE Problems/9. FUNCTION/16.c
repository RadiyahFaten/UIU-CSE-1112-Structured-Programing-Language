#include<stdio.h>
void multiply_two(int n, int arr[]);
int main()
{
    int n;
    scanf("%d", &n);

    int a[n], b[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    multiply_two(n, a);
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    for (int i = 0; i < n; i++) printf("%d ", a[i]);
}

void multiply_two(int n, int arr[])
{
    for (int i = 0; i < n; i++) arr[i] *=2;
}
