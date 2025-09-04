#include <stdio.h>
int main()
{
    char input;
    int i =1;

    do
    {
            scanf(" %c", &input);
            if ( input == 'A' ) break;

            printf("Input %d: %c\n", i, input);
            i++;
    }
    while ( 1 );
}
