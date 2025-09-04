#include<stdio.h>

int main()
{
    FILE * faten;
    faten = fopen("Shahid.txt", "w");
    fprintf(faten,"ayo WTF?! why are there three girls in front of me?");
    fclose(faten);


    FILE * fate;
    fate = fopen("Shahid.txt", "a");
    fprintf(fate,"group?");
    fclose(fate);

    FILE * shahid;
    shahid = fopen("Shahid.txt", "r");
    char str[128];
    int i = 0;
    while(fscanf(shahid, "%c", &str[i]) != EOF) {
        i++;
    }
    fclose(shahid);

    printf("%s", str);
}
