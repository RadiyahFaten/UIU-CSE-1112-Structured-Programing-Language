#include<stdio.h>
void Get_Number_And_Base(int *num, int *base);
char* Convert_Number(int num, int base, char *converted);
void Show_Converted_Number(char *converted);

int main()
{
    int num, base;
    char converted[16];

    Get_Number_And_Base(&num, &base);
    Convert_Number(num, base, converted);
    Show_Converted_Number(converted);


}

void Get_Number_And_Base(int *num, int *base)
{

    do{
    printf("Num: ");
    scanf("%d", num);
    }
    while (*num < 0);


    do{
        printf("Base: ");
        scanf("%d", base);
        if (*base < 2 || *base > 16) printf("Base not within proper range!\n");
    }
    while(*base < 2 || *base > 16);

}

char* Convert_Number(int num, int base, char *converted)
{
    int i = 0;
    char digits[] = "0123456789ABCDEF"; //save all the digits including A- F

    while ( num > 0) {                  //conversion
        int rem = num % base;
        converted[i] = digits[rem];
        i++;
        num /= base;
    }
    converted[i] = 0;

    for (int j = 0, k = i - 1; j < k; j++, k--) { //reverse number string
        char temp = converted[j];
        converted[j] = converted[k];
        converted[k] = temp;
    }
    return converted;
}

void Show_Converted_Number(char *converted)
{
    printf("%s\n", converted);
}
