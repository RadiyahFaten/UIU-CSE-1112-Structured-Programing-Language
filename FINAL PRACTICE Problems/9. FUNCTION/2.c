#include<stdio.h>

char input(char n);

int main()
{
    char c;
    scanf("%c", &c);
    input(c);
}

char input(char n)
{
    printf("Value received from main: %c", n);

    return n;
}
