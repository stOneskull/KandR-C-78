/*
maxval = None
minval = None

while True:
    line = input()
    line = line.strip()
    if line == "done":
        break
    ival = int(line)
    if maxval is None or ival > maxval:
        maxval = ival
    if minval is None or ival < minval:
        minval = ival

print("Maximum", maxval)
print("Minimum", minval)
*/

#include <stdio.h>

int main() {
    int first = 1;
    int val, maxval, minval;

    /* EOF is ctrl-d (linux) or ctrl-z (windows) */

    while (scanf("%d", &val) != EOF) {
        if (first || val > maxval)
            maxval = val;
        if (first || val < minval)
            minval = val;
        first = 0;
    }

    printf("Maximum %d\n", maxval);
    printf("Minimum %d\n", minval);

    return 0;
}