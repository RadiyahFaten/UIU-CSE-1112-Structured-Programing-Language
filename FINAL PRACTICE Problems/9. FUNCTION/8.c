#include<stdio.h>
void print_reverse(int n, int a[]);

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    print_reverse(n, a);
}

void print_reverse(int n, int a[])
{
    for (int i = n - 1; i >= 0; i--) printf("%d ", a[i]);

}
