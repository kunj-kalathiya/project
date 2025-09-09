// program to read mark of five subject and calculate total and percentage

#include<stdio.h>

intmain()
{
    int mark1, mark2, mark3, mark4, mark5, total;
    float percentage;
   printf("enter mark of subject 1: ");
   scanf("%d", &mark1);

    printf("enter mark of subject 2: ");
    scanf("%d", &mark2);

    printf("enter mark of subject 3: ");
    scanf("%d", &mark3);

    printf("enter mark of subject 4: ");
    scanf("%d", &mark4);

    printf("enter mark of subject 5: ");
    scanf("%d", &mark5);

    total = mark1 + mark2 + mark3 + mark4 + mark5;
    percentage = total / 5;

    printf("total mark = %d\n", total);
    printf("percentage = %f", percentage);

}