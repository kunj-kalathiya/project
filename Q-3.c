// program to calculate gross salary

#include <stdio.h>

int main()
{
    int basic, hra, bonus;

    printf("Enter the basic salary: ");
    scanf("%d", &basic);

    printf("Enter the HRA: ");
    scanf("%d", &hra);

    printf("Enter the bonus: ");
    scanf("%d", &bonus);

    int gross = basic + hra + bonus;

    printf("Gross Salary = %d\n", gross);
    
}