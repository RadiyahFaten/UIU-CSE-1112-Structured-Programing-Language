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
    int a[n], sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum+= a[i];
    }
    printf("Sum in function: %d\n", sum);
        return sum;


}

