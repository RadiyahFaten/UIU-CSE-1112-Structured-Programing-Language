#include<stdio.h>
int word_count(int n)
{
    int count = 1;
    if ( n == 0 )  return 0;
    else return (count + word_count(n / 10));
}
int main()
{
    int n;
    scanf("%d", &n);

    printf("%d", word_count(n));
}
