#include<stdio.h>
int power_of(int x, int y);
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d to the power  %d is %d", x, y, power_of(x, y));
}

int power_of(int x, int y)
{
    int a = 1;
    for (int i = 1; i <= y; i++)
         x *= x;
    return x;
}
