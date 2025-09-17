#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20


int main() {
    float fahr, celsius;

    puts("--------------------------");
    puts("Fahrenheit to Celsius");
    puts("---------------------------");

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP) 
        printf("%4.0f F = %6.1f C\n", fahr, 5.0/9.0 * (fahr-32.0));

    puts("---------------------------");
    puts("Celsius to Fahrenheit");
    puts("---------------------------");

    celsius = LOWER;
    while (celsius <= UPPER) {
        fahr = 9.0/5.0 * celsius + 32.0;
        printf("%4.0f C = %4.0f F\n", celsius, fahr);
        celsius += STEP;
    }
    puts("---------------------------");
}
