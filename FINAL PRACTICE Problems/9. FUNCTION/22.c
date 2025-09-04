#include<stdio.h>
int find_subs(char a[], char b[]);
int main()
{
    char a[64];
    scanf("%[^\n]", a);

    char b[64];
    scanf(" %[^\n]", b);

    printf("%d ", find_subs(a, b));

}

int find_subs(char a[], char b[])
{
    int i, j;
    for(i = 0; a[i] != 0; i++) {
        for (j = 0; b[j] != 0; j++) {
            if( a[i + j] != b[j] )
                break;
        }
        if (b[j] == 0) return 1;
    }
    return -1;
}
