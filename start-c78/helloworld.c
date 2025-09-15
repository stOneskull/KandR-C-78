#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PI 3.1416


void down() {
    printf("Action: Down\n");
}

void up() {
    printf("Action: Up\n");
}

void straight() {
    printf("Action: Straight\n");
}


int d(int limit) {
    srand((unsigned)time(NULL)); // Seed the random number generator
    int random_number = rand() % limit; // Generate a random number between 0 and 99
    random_number += 1; 
    printf("Random Number: %d\n", random_number);
    return random_number;
}

int main() {clock_t start = clock();
    time_t now = time(NULL);
    struct tm *local = localtime(&now);

    printf("Current date and time: %s", asctime(local));
    printf("Hello, World!\n");

    int die = d(100);
    float magic = die * PI;
    printf("Magic: %.2f\n", magic); 

    if (magic < 100) {
        down();
    } else if (magic < 200) {
        up();
    } else {
        straight();
    }

    clock_t end = clock();
    double elapsed = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Elapsed time: %f seconds\n", elapsed);
}
