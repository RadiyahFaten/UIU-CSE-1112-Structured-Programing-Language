#include<stdio.h>
int main()
{
    int n;
    int *p = &n;
    scanf("%d", p);

    int a[*p];
    int *array = a; //points to the first element

    for (int i = 0; i < *p; i++ ) scanf("%d", array + i);
    for (int i = *p - 1; i >= 0; i--) printf("%d ", *(array + i));
}
