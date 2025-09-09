/* program to calculate cutoff of mark of students using the formula cm=m/2+p/2+c/2+e where cm = cutoff mark,
 m=marks of mathematics out of 200, p=marks of physics out of 200, c=marks of chemistry out of 200 and e= mark in entrance exam out of 100 */

#include <stdio.h>

int main() {
    float m, p, c, e, cm;
    printf("Enter the marks of Mathematics out of 200: ");
    scanf("%f", &m);
    printf("Enter the marks of Physics out of 200: ");
    scanf("%f", &p);
    printf("Enter the marks of Chemistry out of 200: ");
    scanf("%f", &c);
    printf("Enter the marks of Entrance Exam out of 100: ");
    scanf("%f", &e);
    cm = (m / 2) + (p / 2) + (c / 2) + e;
    printf("The cutoff mark is: %f\n", cm);
    return 0;
}