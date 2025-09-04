#include<stdio.h>
int main()
{
    int n, m, max;
    scanf("%d", &n);
    scanf("%d", &m);

    if (n > m) max = n;
    else max = m;

    int a[max], b[max];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);

    for (int i = 0; i < max; i++) {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }

    printf("Array A:");
    for(int i = 0; i < m; i++) printf("%d ", a[i]);

    printf("\nArray B: ");
    for(int i = 0; i < n; i++) printf("%d ", b[i]);

}
