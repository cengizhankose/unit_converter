#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    int navigation;
    float amount, fixedValue, result;

    system("cls");
    printf("             WELCOME TO UNIT CONVERTER            \n");
    printf("==================================================\n");
    printf("             (Please choose your unit)            \n");
    printf("1-) Currency\n");
    printf("2-) Length\n");
    printf("3-) Mass\n");
    printf("4-) Volume\n");
    printf("5-) Area\n");
    printf("6-) Temperature\n");
    scanf("%d", &navigation);

    switch (navigation)
    {
    case 1:
        system("cls");
        printf("           Choose your unit of Currency           \n");
        printf("==================================================\n");
        printf("1-) Dollar\n");
        printf("2-) Euro\n");
        printf("3-) Turkish Lira\n");
        scanf("%d", &navigation);

        printf("Enter your amount: ");
        scanf("%f", &amount);

        if (navigation == 1)
        {
            fixedValue = amount * 8.09;
        }
        else if (navigation == 2)
        {
            fixedValue = amount * 9.55;
        }
        else if (navigation == 3)
        {
            fixedValue = amount * 1;
        }

        system("cls");
        printf("            Choose your unit to convert           \n");
        printf("==================================================\n");
        printf("1-) Dollar\n");
        printf("2-) Euro\n");
        printf("3-) Turkish Lira\n");
        scanf("%d", &navigation);
        if (navigation == 1)
        {
            result = fixedValue / 8.09;
            printf("RESULT : %f\n", result);
        }
        else if (navigation == 2)
        {
            result = fixedValue / 9.55;
            printf("RESULT : %f\n", result);
        }
        else if (navigation == 3)
        {
            result = fixedValue / 1;
            printf("RESULT : %f\n", result);
        }
        break;
    case 2:
        system("cls");
        printf("            Choose your unit of Length            \n");
        printf("==================================================\n");
        printf("1-) km\n");
        printf("2-) m\n");
        printf("3-) cm\n");
        printf("4-) mm\n");
        scanf("%d", &navigation);

        printf("Enter your amount: ");
        scanf("%f", &amount);

        if (navigation == 1)
        {
            fixedValue = amount * 1000000;
        }
        else if (navigation == 2)
        {
            fixedValue = amount * 1000;
        }
        else if (navigation == 3)
        {
            fixedValue = amount * 10;
        }
        else if (navigation == 4)
        {
            fixedValue = amount * 1;
        }

        system("cls");
        printf("            Choose your unit to convert           \n");
        printf("==================================================\n");
        printf("1-) km\n");
        printf("2-) m\n");
        printf("3-) cm\n");
        printf("4-) mm\n");
        scanf("%d", &navigation);
        if (navigation == 1)
        {
            result = fixedValue / 1000000;
            printf("RESULT : %.2f\n", result);
        }
        else if (navigation == 2)
        {
            result = fixedValue / 1000;
            printf("RESULT : %.2f\n", result);
        }
        else if (navigation == 3)
        {
            result = fixedValue / 10;
            printf("RESULT : %.2f\n", result);
        }
        else if (navigation == 4)
        {
            result = fixedValue / 1;
            printf("RESULT : %.2f\n", result);
        }
        break;
    case 3:
        system("cls");
        printf("             Choose your unit of Mass             \n");
        printf("==================================================\n");
        printf("1-) kg\n");
        printf("2-) g\n");
        printf("3-) mg\n");
        scanf("%d", &navigation);

        printf("Enter your amount: ");
        scanf("%f", &amount);

        if (navigation == 1)
        {
            fixedValue = amount * 1000000;
        }
        else if (navigation == 2)
        {
            fixedValue = amount * 1000;
        }
        else if (navigation == 3)
        {
            fixedValue = amount * 1;
        }

        system("cls");
        printf("            Choose your unit to convert           \n");
        printf("==================================================\n");
        printf("1-) kg\n");
        printf("2-) g\n");
        printf("3-) mg\n");
        scanf("%d", &navigation);
        if (navigation == 1)
        {
            result = fixedValue / 1000000;
            printf("RESULT : %.2f\n", result);
        }
        else if (navigation == 2)
        {
            result = fixedValue / 1000;
            printf("RESULT : %.2f\n", result);
        }
        else if (navigation == 3)
        {
            result = fixedValue / 1;
            printf("RESULT : %.2f\n", result);
        }
        break;
    case 4:
        system("cls");
        printf("            Choose your unit of Volume            \n");
        printf("==================================================\n");
        printf("1-) km^3 to m^3\n");
        printf("2-) m^3 to km^3\n");
        scanf("%d", &navigation);

        printf("Enter your amount: ");
        scanf("%f", &amount);

        if (navigation == 1)
        {
            result = amount * 1000000000;
            printf("RESULT : %.2f\n", result);
        }
        else if (navigation == 2)
        {
            result = amount / 1000000000;
            printf("RESULT : %.2f\n", result);
        }
        break;
    case 5:
        system("cls");
        printf("              Choose your unit of Area            \n");
        printf("==================================================\n");
        printf("1-) km^2 to m^2\n");
        printf("2-) m^2 to km^2\n");
        scanf("%d", &navigation);

        printf("Enter your amount: ");
        scanf("%f", &amount);

        if (navigation == 1)
        {
            result = amount * 1000000;
            printf("RESULT : %.2f\n", result);
        }
        else if (navigation == 2)
        {
            result = amount / 1000000;
            printf("RESULT : %.2f\n", result);
        }
        break;
    case 6:
        system("cls");
        printf("          Choose your unit of Temperature         \n");
        printf("==================================================\n");
        printf("1-) Celcius\n");
        printf("2-) Fahrenheit\n");
        printf("3-) Kelvin\n");
        scanf("%d", &navigation);

        printf("Enter your amount: ");
        scanf("%f", &amount);

        if (navigation == 1)
        {
            fixedValue = amount * 1;
        }
        else if (navigation == 2)
        {
            fixedValue = (amount - 32) / 1.8;
        }
        else if (navigation == 3)
        {
            fixedValue = amount - 273;
        }

        system("cls");
        printf("            Choose your unit to convert           \n");
        printf("==================================================\n");
        printf("1-) Celcius\n");
        printf("2-) Fahrenheit\n");
        printf("3-) Kelvin\n");
        scanf("%d", &navigation);
        if (navigation == 1)
        {
            result = fixedValue / 1;
            printf("RESULT : %.2f\n", result);
        }
        else if (navigation == 2)
        {
            result = (fixedValue * 1.8) + 32;
            printf("RESULT : %.2f\n", result);
        }
        else if (navigation == 3)
        {
            result = fixedValue + 273;
            printf("RESULT : %.2f\n", result);
        }
        break;
    default:
        break;
    }
    return 0;
}