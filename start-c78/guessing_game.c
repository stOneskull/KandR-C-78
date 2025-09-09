/*
while True:
    try:
        guess = int(input("Guess the number: "))
    except:
        break
    
    if guess == 42:
        print('Nice work!)
        break
    elif guess < 42:
        print('Too low - guess again!')
    else:
        print('Too high - guess again!')
*/

#include <stdio.h>

int main() {
    int guess;

    puts("Guess the number: ");

    /* 
    seems there is while (1) but just going with my teacher for now
    teacher put in "else if (guess < 42)" but seems can just use if again here
    */

    while (scanf("%d", &guess) != EOF) {
        if (guess == 42) {
            puts("Nice work!");
            break;
        } 
        if (guess < 42)
            puts("Too low - guess again!");
        else 
            puts("Too high - guess again!");
    }

    return 0;
}