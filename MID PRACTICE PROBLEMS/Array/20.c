#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int m;
    scanf("%d", &m);

    int b[m];
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);

    for (int i = 0; i < n; i++) printf("%d ", a[i]);

    for (int j = 0; j < m; j++) {
        for (int i = 0, k = 0; i < n; i++) {
            if (b[j] != a[i]) k++;
            if ( k == n ) printf("%d ", b[j]);

            }
    }

}
