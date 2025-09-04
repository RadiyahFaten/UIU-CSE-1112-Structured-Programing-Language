#include<stdio.h>

int main()
{
    int n;
    int *p = &n;
    scanf("%d", p);

    int a[*p];
    int *array = a; // points to the first element

    int sum = 0;
    for (int i = 0 ; i < *p; i++ ) scanf("%d", array + i );
     for (int i = 0 ; i < *p; i++ )
        sum += *(array + i);

    printf("%d", sum);
}
