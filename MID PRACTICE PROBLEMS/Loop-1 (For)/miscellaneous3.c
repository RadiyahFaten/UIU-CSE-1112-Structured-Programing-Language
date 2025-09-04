#include <stdio.h>
int main()
{
    int n, a, power =1;
    scanf("%d %d", &a, &n);

    for (int i = 1; i <= n; i++) {

        //printf("i = %d\n", i);
        power *= a;
    }
        printf("a to the power n = %d", power);

}
