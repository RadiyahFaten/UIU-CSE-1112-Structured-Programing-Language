#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0, j =3; i < n; i++, j+= 3)
        printf("%d ", j);
}

