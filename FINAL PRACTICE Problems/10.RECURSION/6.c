#include<stdio.h>

void jump_one(int x, int y)
{
    if( x > y ) return;
    printf("%d ", x);
    jump_one( x + 2, y );
}

 int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    printf("Even number: ");
    if ( n1 % 2 == 0 ) jump_one(n1, n2);
    else jump_one(n1+ 1, n2);

    printf("\nOdd number: ");
    if ( n1 % 2 != 0 ) jump_one(n1, n2);
    else jump_one(n1+ 1, n2);
}

