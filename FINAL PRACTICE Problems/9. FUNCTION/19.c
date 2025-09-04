#include<stdio.h>
int IsPrime(int n);
void GeneratePrime(int n);

int main()
{
    int N;
    scanf("%d", &N);
    printf("Prime less than %d: ", N);
    GeneratePrime(N);

}

int IsPrime(int n)
{
    for (int i = 2; i < n - 1; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void GeneratePrime(int n)
{
    for (int i = 2; i < n; i++) {
        if (IsPrime(i)) printf("%d ", i);
    }
}
