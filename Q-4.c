// Q-4: Convert Fahrenheit to Celsius
#include <stdio.h>

int main() {
    float c, f;
    printf("Enter Fahrenheit: ");
    scanf("%f", &f); // use &f to store input correctly

    c = (f - 32) * 5.0 / 9.0;
    printf("Celsius = %f\n", c);

    return 0;
}
