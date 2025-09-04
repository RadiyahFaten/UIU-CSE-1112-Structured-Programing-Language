#include <stdio.h>
int main()
{
int  n, n_n, rem =0, reverse = 0;
 scanf("%d", &n);
 n_n = n;

 for ( ; n != 0 ; )

 {
     rem = n % 10;
     reverse = reverse * 10 + rem;
     n /= 10;

 }
  if (n_n == reverse) printf("Palindrome number = %d", reverse);
  else printf("Not palindrome");
}
