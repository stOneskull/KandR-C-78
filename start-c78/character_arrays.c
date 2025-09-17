/*

x = ''
for i in range(1000):
    x += '*'
print(x)

$ python stars.py

**************************...

*/

#include <stdio.h>

int main() {
    char x[10];
    int i;

    for (i = 0; i < 1000; i++)
        x[i] = '*';
    printf("%s\n", x);
}

/*

$ ./a.out

*** stack smashing detected ***: terminated

watch out for this

*/
