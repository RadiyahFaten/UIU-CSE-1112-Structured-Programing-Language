#include<stdio.h>
int GCD(int a, int b);
int LCM(int a, int b);
int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    printf("GCD: %d ", GCD(x, y));
    printf("LCM: %d", LCM(x, y));
}

int GCD(int a, int b)
{
    int gcd = 1;
    for (int i = 2; i <= a && i <= b; i++){
        if( a % i == 0 && b % i == 0) gcd = i;
    }
    return gcd;
}

int LCM(int a, int b)
{
    int lcm = (a * b) / GCD(a, b);

    return lcm;
}
