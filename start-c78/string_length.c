/*
In C, string "length" must be computed in a loop
that scans for a zero character

There the strlen() function in string.h computes string length

x = 'Hello'
print(x, len(x))

$ python hi.py

Hello 5
*/

#include <stdio.h>

int main() {
    char x[] = "Hello";
    int py_len();
    printf("%s %d\n", x, py_len(x));
}

int py_len(self)
    char self[];
{
    int i;
    for (i = 0; self[i]; i++);
    return i;
}