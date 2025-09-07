#include <stdio.h>

/*
print('Enter name')
name = input()
print('Hello', name)
*/

int main() {
    char name[100];
    puts("Enter name");
    scanf("%100s", name);
    printf("Hello %s\n", name);
    return 0;
}