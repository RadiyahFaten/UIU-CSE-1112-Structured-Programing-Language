#include<stdio.h>
int IsPrime(int n);

int main()
{
    int n;
    scanf("%d", &n);
    int prime = IsPrime(n);
    if (prime == 0 ) printf("Prime");
    else printf("Not Prime");

}

int IsPrime(int n)
{
    int prime = 0;
    for (int i = 2; i < n - 1; i++){
        if (n % i == 0) prime = 1;
    }
    //if (prime == 0 ) printf("Prime");
    //else printf("Not Prime");
    return prime;
}
