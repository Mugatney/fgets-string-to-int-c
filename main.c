#include <stdio.h>      //Task:generate rand num from 0 - 20!,only accept nums from this range,
#include <stdlib.h>     // tell the user if guess is high or low, win if guessed in 5 guesses!
#include <time.h>
int main()
{
    time_t t;                       //create time variable
    srand((unsigned) time(&t));     //initialize random number generator
    int randNumber = rand()%21;     //get the random and store it in an int variable

    printf(".......................................\n");
    printf("Please guess a number between 0 and 20!\n");//ask user to guess the number
    printf(".......................................\n");
    char userInput[99];
    int numOfGuesses = 1;
    char* endPtr;


    while(numOfGuesses < 11){
    fgets(userInput, 99, stdin);

    int x = strtod(userInput,0);    //takes user input and changes it to int
    if(x < 1 || x > 20){printf("Number is not between 1 and 20!....\n");}
    if(x < randNumber){printf("The randomly generated number is HIGHER!..\n");}
    if(x > randNumber){printf("The randomly genrated number is LOWER!...\n");}
    if(x == randNumber){printf("\n.........................YOU HAVE GUESSED THE CORRECT NUMBER!!!...\n\n");
       // numOfGuesses = 10;}
       return 0;}
    printf("Your Guess was %d\n",x);
    printf("Number of Guesses is: %d\n\n",numOfGuesses);
    printf("\n\n......NUMBER OF GUESSES LEFT: %d\n\n", 10 - numOfGuesses);
    if(numOfGuesses==10){printf("The Random number is %d\n", randNumber);}

        numOfGuesses++;}














    return 0;
}
