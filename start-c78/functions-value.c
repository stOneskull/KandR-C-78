/*
def mymult(a, b):
    return a * b

val = mymult(6, 7)
print('Answer:', val)
*/

#include <stdio.h>

/*
i really want to declare types in parameters but trying to stick to old style K&R C
wondering if i'm allowed to return a*b now.. teacher wants "int c; c = a * b; return c;" 
oh well.. i might not worry too much about sticking to K&R C soon
*/

int mymult(a, b)
int a, b;
{
    return a * b;
}

int main() {
    int val = mymult(6, 7);

    printf("Answer: %d\n", val);

    return 0;
}