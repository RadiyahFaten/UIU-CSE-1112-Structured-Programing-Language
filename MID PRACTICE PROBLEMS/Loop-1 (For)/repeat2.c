
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a value:");
    scanf("%d", &n);

    for (int i =0,  j = 1; i <= n; i++, j++) {

        printf("Loop iteration number: %d \n", i);
        printf("Repeated number: %d\n", j );

    }


}

