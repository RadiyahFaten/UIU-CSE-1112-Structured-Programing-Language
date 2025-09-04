#include<stdio.h>
void ascending_order(int n, int a[]);

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    ascending_order(n, a);
     for (int i = 0; i < n; i++) printf("%d ", a[i]);

}

void ascending_order(int n, int a[])
{
    for (int i = 0 ; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ( a[j] > a[ j + 1]) {
                int temp = a[j];
                a[j] = a[ j + 1];
                a[ j + 1] = temp;
            }
        }
    }
}
