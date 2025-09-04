#include<stdio.h>
void SwapByValue(int* x, int *y);

int main()
{
    int x, y;
    int *a = &x;
    int *b = &y;
    scanf("%d %d", &x, &y);
    SwapByValue(a , b);
    //SwapByValue(&x , &y); means the same as above

    printf("%d %d", x, y);
}

void SwapByValue(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

      printf("%d %d", *x, *y);
}

