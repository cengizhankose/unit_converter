#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int unit;

    printf("             WELCOME TO UNIT CONVERTER            \n");
    printf("==================================================\n");
    printf("             (Please choose your unit)            \n");
    printf("1-) Money\n");
    printf("2-) Length\n");
    printf("3-) Mass\n");
    printf("4-) Volume\n");
    printf("5-) Area\n");
    printf("6-) Temperature\n");
    scanf("%d", &unit);

    switch (unit)
    {
    case 1:
        system("cls");
        break;
    case 2:
        system("cls");
        break;
    case 3:
        system("cls");
        break;
    case 4:
        system("cls");
        break;
    case 5:
        system("cls");
        break;
    case 6:
        system("cls");
        break;
    default:
        break;
    }
    return 0;
}