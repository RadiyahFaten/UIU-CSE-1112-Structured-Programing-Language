#include<stdio.h>
int main()
{
    int n, empty = 0;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int m;
    scanf("%d", &m);

    int b[m];
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                    printf("%d ", a[i]);
                    empty = 1;
            }
        }

    }
     if (empty == 0) printf("Empty set");



}
