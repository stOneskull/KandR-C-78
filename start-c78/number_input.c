#include <stdio.h>

/*
print('Enter US Floor')
usf = int(input())
euf = usf - 1
print('EU Floor', euf)
*/

int main() {
    int usf, euf;
    puts("Enter US Floor");
    scanf("%d", &usf);
    euf = usf - 1;
    printf("EU Floor %d\n", euf);
    return 0;
}