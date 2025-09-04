#include<stdio.h>
int is_even(int n, int input[], int output[]);
int main()
{
    int n;
    scanf("%d", &n);

    int a[n], b[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int even_count =  is_even(n, a, b);

    for (int i = 0; i < even_count; i++)
        printf("%d ", b[i]);
}

int is_even(int n, int input[], int output[])
{
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (input[i] % 2 == 0) {
            output [count] = input[i];
            count++;
        }
    }
    return count;
}
