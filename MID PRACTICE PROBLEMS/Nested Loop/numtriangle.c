#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

     for (int i = 1; i<= n; i++) {
        for (int j = 1; j <= n - i; j++)  printf(" ");
        for (int j = i; j>= 1; j--)  printf("%d", j);

            printf("\n");
     }
        //right triangle
        for (int i = 1; i<= n; i++) {
        for (int j = 1, k = n; j<= n; j++, k-- )
        ( j <= n- i ) ? printf(" ") : printf("%d", k);
        printf("\n");
          }

        for (int i = 1; i<= n; i++) {
        for (int j = 1; j <= n - i; j++)    printf(" ");
        for (int j = 1, k = n; j<= i; j++, k--)  printf("%d", k);

        printf("\n");
     }

}




    //right triangle
    /*for (int i = 1; i<= n; i++) {
        for (int j = 1, k= n; j<= n; j++, k-- )
        ( j <= n- i ) ? printf(" ") : printf("%d", k);
        printf("\n");
          }*/

          /* for (int i = 1; i<= n; i++) {
        for (int j = 1; j <= n - i; j++)    printf(" ");
        for (int j = 1, k = n; j<= i; j++, k--)  printf("%d", k);

        printf("\n");
     }*/
