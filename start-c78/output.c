#include <stdio.h>

/* I am a comment */

/*
print('Hello world')
print('Answer', 42)
print('Name', 'Sarah')
print('x', 3.5, 'i', 10)
*/

int main() {
    printf("Hello world\n");
    printf("Answer %d\n", 42);
    printf("Name %s\n", "Sarah");
    printf("x %.1f i %d\n", 3.5, 10);
    return 0;
}