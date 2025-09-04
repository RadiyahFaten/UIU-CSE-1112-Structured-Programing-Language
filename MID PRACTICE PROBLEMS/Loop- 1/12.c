#include<stdio.h>
int main()
{
    int n, f1 =1, f2 =1, sum =0 ;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        if (i == 1) printf("1");
        else if (i == 2) printf("1");
        else
        {
            sum = f1 + f2;
            printf("%d", sum);
            f1= f2;
            f2= sum;
        }
        if (i != n) printf(",");

    }



}
