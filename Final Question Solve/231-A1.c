#include<stdio.h>
int is_prime(int x);
int digit_sum(unsigned int x);
int is_superprime(int x);
int main()
{
    int start, end;
    scanf("%d%d", &start, &end);

    for (int i = start; i <= end; i++) {
        if( is_superprime(i) ) printf("%d\n", i);
    }
}

int is_prime(int x)
{
        for (int i = 2; i <= x  - 1; i++) {
            if (x % i == 0 ) return 0;
        }
        return 1;
}

int digit_sum(unsigned int x)
{
    int rem = 0;
    int sum = 0;

    while ( x != 0 ) {

        rem = x % 10;
        sum += rem;
        x /= 10;
    }
    return sum;
}

int is_superprime(int x)
{
    int sum = digit_sum(x);
    if(is_prime(x) && is_prime(sum)) return 1;
    else return 0;
}
