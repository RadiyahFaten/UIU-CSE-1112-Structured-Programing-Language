#include<stdio.h>

int main()
{
    char s[64];
    char sub[32];

    scanf(" %[^\n]", s);
    getchar();
    scanf(" %[^\n]", sub);
    getchar();

    int len = 0;
    while(sub[len] != 0) len++;

    int i, j, occur = 0;
    for (i = 0; s[i] != 0; i++) {
        int count = 0;
        for (j = 0; sub[j] != 0; j++) {
            if( s[i+j] == sub[j] ) count++;
        }
        if(count == len && (s[i + j] == ' ' || s[i + j] == '.' || s[i + j] == ' ,' || s[i + j] == 0) ) occur++;
    }
    printf("%d", occur);
}

