#include<stdio.h>
int IsPrime(int n);
void GenNthPrime(int n);


int main()
{
    int N;
    scanf("%d", &N);
    GenNthPrime(N);
}

int IsPrime(int n)
{

    for (int i = 2; i < n - 1; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void GenNthPrime(int n)
{
    int count = 0;
    for ( int i = 2;  ; i++) {
        int prime_ = IsPrime(i);
        if (prime_ == 1)
            count++;
        if (count == n) {
            printf("%dth Prime: %d",n, i);
            break;
        }
    }
}
