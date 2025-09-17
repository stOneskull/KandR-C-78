#include <stdio.h>
#include <stdlib.h>
#include <time.h>

down() {
    printf("Action: Down\n");
}

up() {
    printf("Action: Up\n");
}

straight() {
    printf("Action: Straight\n");
}


d(int limit) {
    srand((unsigned)time(NULL)); 
    /* Seed the random number generator, then generate a random number 
    from 0 to limit-1, then add 1 to it, so that the number is from 1-limit */
    int random_number = rand() % limit;
    random_number += 1; 
    printf("Random Number: %d\n", random_number);
    return random_number;
}

main() {clock_t start = clock();
    time_t now = time(NULL);
    struct tm *local = localtime(&now);

    printf("Current date and time: %s", asctime(local));
    printf("Hello, World!\n");

    int die = 0;
    scanf("%d", &die);
    if (!die)
        die = 2;
    printf("Die: %d\n", die);

    int random_number = d(die);

    float magic = random_number * 3.1416;
    printf("Magic: %.2f\n", magic); 

    if (magic > 2*die)
        up();
    else if (magic > die)
        straight();
    else
        down();

    clock_t end = clock();
    double elapsed = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Elapsed time: %f seconds\n", elapsed);
}
