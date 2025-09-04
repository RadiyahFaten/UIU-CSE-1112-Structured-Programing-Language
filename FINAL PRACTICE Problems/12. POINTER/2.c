#include<stdio.h>
int main()
{
    int a, b;
    int *p1 = &a, *p2 = &b;

    scanf("%d %d", p1, p2);
    if (*p1 > *p2) printf("%d", *p1);
    else printf("%d", *p2);
}
