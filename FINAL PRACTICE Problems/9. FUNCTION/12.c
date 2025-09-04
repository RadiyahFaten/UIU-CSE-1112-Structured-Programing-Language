#include<stdio.h>
void SwapByValue(int x, int y);

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    SwapByValue(x , y);

    printf("%d %d", x, y);
}

void SwapByValue(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;

      printf("%d %d", x, y);
}
