#include<stdio.h>
int sum(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("Sum in Main: %d", sum(n));

}

int sum(int n)
{
    int num, sum = 0;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &num);
        sum+= num;
    }
    printf("Sum in function: %d\n", sum);
        return sum;


}
