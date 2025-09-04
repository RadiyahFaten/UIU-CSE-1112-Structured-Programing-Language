#include<stdio.h>
void is_greater(int a, int b);
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    is_greater(x, y);
}

void is_greater(int a, int b)
{
    if (a > b) printf("%d is greater than %d", a , b);
    else if (a < b) printf("%d is less than %d", a, b);
    else printf("%d is equal to %d", a , b);
}
