#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // 1) set the upper limit and number of tries to 7
    int upper_limit = 100;
    int num_of_tries = 7;
    printf("Let's play a guessing game!\n"
        "You have %d tries to guess a number between 1 and %d.\n", num_of_tries, upper_limit
    );

    // 2) set a bonus number (random)
    srand(time(NULL));
    int reward_num = rand() % upper_limit + 1;

    // 3) loop for the number of tries
    while (num_of_tries > 0) {
        printf("You have %d tries left. Enter your guess: ", num_of_tries);
        int guess;
        scanf("%d", &guess);
        if (guess == reward_num) {
            printf("Congratulations! You guessed the number %d!\n", reward_num);
            break;
        }
        else if (guess < reward_num) {
            printf("Too low!\n");
        }
        else {
            printf("Too high!\n");
        }
        num_of_tries--;
    }
    if (num_of_tries == 0) {
        printf("Sorry, you've run out of tries. The number was %d.\n", reward_num);
    }
    return 0;
}
