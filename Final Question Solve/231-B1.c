#include<stdio.h>
#include<math.h>

int is_prime(int n);
int power_of_2(int n);
int is_mersenne( int x );

int main()
{
    int n;
    scanf("%d", &n);

    if(is_mersenne(n)) printf("Yes");
    else printf("No");

}

int is_prime(int n)
{
    for (int i = 2; i <= n - 1; i++) {
        if ( n % i == 0) return 0;
    }
    return 1;
}

int power_of_2(int n)
{
    if ( floor(log2(n)) == ceil(log2(n)) ) return 1;
    else return 0;
}

int is_mersenne( int x )
{
    if (is_prime(x) && power_of_2(x + 1)) return 1;
    else return 0;
}
