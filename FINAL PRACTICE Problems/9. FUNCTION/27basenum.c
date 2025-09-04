#include<stdio.h>

void Get_Number_And_Base(int *num, int *base);
int Convert_Number(int num, int base, int *converted);
void Show_Converted_Number(int *converted);

int main()
{
    int num, base;
    int converted = 0;

    Get_Number_And_Base(&num, &base);
    Convert_Number(num, base, &converted);
    Show_Converted_Number(&converted);


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

int Convert_Number(int num, int base, int *converted)
{
    int temp = 0;

    while ( num > 0) {               //conversion and storing the num
        int rem = num % base;
        temp *= 10;
        temp += rem;
        num /= base;
    }

    while ( temp > 0 ) {             //reversing the number
        int remc = temp % 10;
        *converted *= 10;
        *converted += remc;
          temp /= 10;
    }

    return *converted;
}

void Show_Converted_Number(int *converted)
{
    printf("%d", *converted);
}
