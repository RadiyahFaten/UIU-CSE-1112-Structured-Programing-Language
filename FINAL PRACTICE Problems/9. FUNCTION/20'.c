#include<stdio.h>
void GenNthPrime(int n);
int main()
{
    int n;
    scanf("%d", &n);

    GenNthPrime(n);
}

 int IsPrime(int n)
 {
     for (int i = 2; i < n - 1; i++) {
        if ( n % i == 0 ) return 0;
     }
     return 1;
 }

 void GenNthPrime(int n)
 {
     int count = 0;
     for ( int i = 2;  ; i++) {
        if (IsPrime(i)) count++;
        if (count == n) {
        printf("%dth Prime: %d", n, i);
        break;
        }
     }
 }
