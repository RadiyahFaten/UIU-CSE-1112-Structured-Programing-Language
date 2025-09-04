#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0, j =1; i < n; i++, j+= 2) // i tracks the iteration of loop
        printf("%d ", j); // j prints the value
}
