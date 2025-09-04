#include<stdio.h>
int summation(int *a, int *b);
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d %d\n", x, y);
    int sum = summation(&x, &y);
    printf("%d\n", sum);

    printf("%d %d\n", x, y);

}

int summation(int *a, int *b)
{
    int sum = 0;
    *a *= 2;
    *b *= 2;

    sum = *a + *b;
    return sum;
}
