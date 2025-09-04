#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n], b[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    for (int i = 0, j = n-1 ; i < n; i++, j--) {
        b[j] = a[i];
    }
    printf("Array A:");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    printf("Array B:");
    for (int i = 0; i < n; i++) printf("%d ", b[i]);
}
