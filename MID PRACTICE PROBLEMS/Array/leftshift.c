#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    // left shift by 1
    int temp = a[0];
    for (int i = 0; i < n; i++)
        a[i] = a [ i + 1];
        a[n - 1] = temp;

        //left shift by 2 by rotating twice
        int temp_1 = a[0];
        for (int i = 0; i < n; i++)
        a[i] = a [ i + 1];
        a[n - 1] = temp_1;


        // left shift by 2
        int temp = a[0];
        int temp_1 = a[1];

        for (int i = 0; i < n; i++)
            a[i] = a [ i + 2];

        a[n - 2] = temp;
        a[n - 1] = temp_1;


    for (int i = 0; i < n; i++) printf("%d ", a[i]);


}
