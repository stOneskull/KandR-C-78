#include <stdio.h>

/*
int main() {
    char line[1000];
    puts("Enter line");
    scanf("%[^\n]1000s", line);
    printf("Line: %s\n", line);
    return 0;
}
*/

/* safe */

int main() {
    char line[1000];
    puts("Enter line");
    fgets(line, 1000, stdin);
    printf("Line: %s\n", line);
    return 0;
}