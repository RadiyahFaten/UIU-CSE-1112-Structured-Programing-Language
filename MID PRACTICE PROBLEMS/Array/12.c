#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n + 1];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int num;
    printf("Number:");
    scanf("%d", &num);

    int position;
    printf("Position: ");
    scanf("%d", &position);

    for (int i = n - 1; i >= position; i--)
        a[i + 1] = a[i];

        a[position] = num;

        for (int i = 0; i < n + 1; i++) printf("%d ", a[i]);

}
