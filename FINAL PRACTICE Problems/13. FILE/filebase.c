#include<stdio.h>

int main()
{
    FILE *fp;
    int n;
    //scanf("%d", &n);

    fp = fopen("in.txt", "r");

    fscanf(fp, "%d", &n);
    printf("Welcome %d", n);
    fclose(fp);
}
