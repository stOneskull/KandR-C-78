/*
In C, a string is an array of characters.
single quotes are characters
double quotes are a character array

a character is a byte integer.
*/

#include <stdio.h>

int main() {
    char x[3] = "Hi";
    char y[3] = {'H', 'i'};
    printf("x %s\n", x);
    printf("y %s\n", y);
    printf("%s\n", "Hi");
    printf("%c%c\n", 'H', 'i');
    printf("%d %d \n", 'H', 'i');
}