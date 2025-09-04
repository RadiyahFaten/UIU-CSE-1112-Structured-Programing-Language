#include<stdio.h>
int primeChecker(int a);
int checkerFunc1(int a);
int DemogorgonNumber(int a);

int main()
{
    int start, end;
    scanf("%d%d", &start, &end);

    for (int i = start; i<= end; i++) {
        if (DemogorgonNumber(i) == 1) printf("%d ", i);
    }
}

int primeChecker(int a)
{
    for(int i = 2; i < a - 1; i++) {
        if (a % i == 0 ) return -1;
    }
    return 1;
}

int checkerFunc1(int a)
{
    int b = a, rem = 0;
    int sum_odd = 0, sum_even = 0;
    while (b != 0) {
        rem = b % 10;
        if (rem % 2 == 0 ) sum_even += rem;
        else sum_odd += rem;
        b /= 10;
    }
    //printf("Even: %d", sum_even);
    // printf("Odd: %d", sum_odd);
    if (sum_even > sum_odd) return 1;
    else return -1;
}

int DemogorgonNumber(int a)
{
    if ( primeChecker(a) == 1 && checkerFunc1(a) == 1 ) return 1;
    else return -1;
}
