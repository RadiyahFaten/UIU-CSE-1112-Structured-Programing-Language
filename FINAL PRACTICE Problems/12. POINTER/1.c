#include<stdio.h>

int main()
{
    int a, b;
    int *p1 = &a, *p2 = &b;
    scanf("%d %d", p1, p2);
    printf("%d %d\n", p1, p2); // prints the address
    printf("%d %d\n", *p1, *p2); //prints the value

    printf("Sum = %d\n", *p1 + *p2); //sum value
}
