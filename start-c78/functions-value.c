/*
def mymult(a, b):
    return a * b

val = mymult(6, 7)
print('Answer:', val)
*/

#include <stdio.h>

int mymult(a, b)
int a, b;
{
    int c;
    c = a * b;
    return c;
}

int main() {
    int val = mymult(6, 7);

    printf("Answer: %d\n", val);

    return 0;
}