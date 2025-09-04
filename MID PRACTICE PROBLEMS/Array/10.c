#include<stdio.h>
int main()
{
    int n, flag = 0;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int m;
    scanf("%d", &m);

    for (int i = 0; i < n; i++) {

        if (a[i] == m) {
            printf("Found at index position; %d\n", i);
            flag = 1;
        }
    }

    if (flag == 0) printf("Not found");

}
