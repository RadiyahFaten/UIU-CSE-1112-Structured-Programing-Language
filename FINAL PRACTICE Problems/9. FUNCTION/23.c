#include<stdio.h>
int str_length(char a[]);
int substr(char a[], char b[]);
int main()
{
    char a[64];
    scanf("%[^\n]", a);

    char b[64];
    scanf(" %[^\n]", b);

    if(str_length(a) > str_length(b)) {
        printf("%d", substr(a, b));
    }
    else if (str_length(a) < str_length(b))
     printf("%d", substr(b, a));
}

int str_length(char a[])
{
    int len = 0;
    while (a[len] != 0) len++;
    return len;
}

int substr(char a[], char b[])
{
    int i, j;
    for (i = 0; a[i] != 0; i++) {
        for (j = 0; b[j] != 0; j++) {
            if (a[i + j] != b[j]) break;
        }
        if(b[j] == 0) return 1;
    }
    return -1;
}
