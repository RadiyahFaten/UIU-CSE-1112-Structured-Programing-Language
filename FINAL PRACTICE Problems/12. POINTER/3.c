#include<stdio.h>

int main()
{
    int n;
    int *p = &n;
    scanf("%d", p);

    int a[*p];
    int *index = a; //this locates the address of first element of array
                            // array is not a variable, itself indicates an address. So '&' not needed

    for (int i = 0; i < *p; i++) scanf("%d", index + i); //takes input in the address
    for (int i = 0; i < *p; i++) printf("%d ", *(index + i) ); //prints value of array
}
