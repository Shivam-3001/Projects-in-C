#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, n=1;
    srand(time(0));
    number = rand()%100 + 1; // Generates a random number between 1 and 100
    // printf("The number is %d\n", number);
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("Lower number\n");
        }
        else if(guess<number){
            printf("Higher number\n");
        }
        else{
            printf("You guessed the number in %d attempts\n", n);
        }
        n++;
    }while(guess!=number);
    
    return 0;
}