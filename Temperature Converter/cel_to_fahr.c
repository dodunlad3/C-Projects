//Program to convert celsius to fahrenheit or vice versa
#include <stdio.h>

int main(void)
{
    float celsius, fahrenheit;
    int choice;

    printf("Enter 1 to convert celsius to fahrenheit\n");
    printf("Enter 2 to convert fahrenheit to celsius\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter the temperature in celsius\n");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%.2f celsius = %.2f fahrenheit\n", celsius, fahrenheit);
    }
    else if (choice == 2)
    {
        printf("Enter the temperature in fahrenheit\n");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.2f fahrenheit = %.2f celsius\n", fahrenheit, celsius);
    }
    else
    {
        printf("Invalid choice\n");
    }

    return 0;
}