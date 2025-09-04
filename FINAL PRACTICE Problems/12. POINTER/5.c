#include<stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int *a = &x, *b = &y;

    int temp = *a;
    *a = *b;
    *b = temp;

    printf("%d %d\n", x, y);
    printf("%d %d\n", *a, *b); //same


}

