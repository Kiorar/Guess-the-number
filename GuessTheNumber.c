#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

     int attempts;
    printf("How many attempts would you like to have?\n");
    scanf( "%d", &attempts);


    printf("I'm thinking of a number between 1 and 100.\n Can you guess it?");

    srand(time(NULL)); 
    int random_number = (rand() % 100) + 1;
    int guess;
   

    while (attempts > 0){

        printf("You have %d attempts left.\n", attempts);
        scanf("%d", &guess);
        if(guess == random_number){
            printf("Congratulations! You guessed the number!\n");
            break;

        } else if (guess < random_number){
            printf("The number is higher than that.\n");

        }
         else if (guess > random_number) {
            printf("The number is lower than that.\n");
        }
        attempts--;


    }

    if (attempts == 0){
        printf("You have no more attempts left. The number was %d\n", random_number);
    }
    return 0;
}
