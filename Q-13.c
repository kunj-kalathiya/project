//program to chack whether a number is even or odd


#include <stdio.h>      
int main() 
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0) 
    {
        printf("number is even.\n");
    } 
    else 
    {
        printf("number is odd.\n");
    }

    return 0;
}