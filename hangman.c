#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "drawing.h"

/*
    Start of Nicholas Verhelle's code
*/

int main() {
    
  srand(time(NULL));                    
  
  char posWords[][16] = {
    "america",
    "tractor",
    "hazing",
    "burger",
    "food",
    "xylophone"
  };
  
  int randPick = rand() % 6;
  
  //Error check (commet out when playing)
  printf("%s\n", posWords[randPick]);
  
  //Initializing variables
  int Lives = 6;
  int* ptrLives = &Lives;
  int amtcorrect = 0;
  int prevcorrect = 0;
  
  
  
  int WordLength = strlen(posWords[randPick]);
  char Guessedletters[26] = {0};
  
  char guess[16];
  char enteredLetter;
  char blanks[10];
  int q;

  //Displaying blank letters
  for(q=0; q < WordLength; q++) {
      blanks[q] = '_';
      printf("%c ", blanks[q]);
  }
  printf("\n");
  blanks[q] = 0;
  //Displaying drawing and prompting user input
  while (amtcorrect < WordLength) {
    drawing(ptrLives);
    printf("Enter a letter: ");
    fgets(guess, 16, stdin);
/*
    End of Nicholas Verhelle's code
*/
  
    
/*
    Start of Dylan McGoldrick's code
*/
    
    //Error checking
    if (guess[0] >= 65 && guess[0] <= 90){
        guess[0] = guess[0] + 32;
    }
    while (guess[0] < 65 || guess[0] > 122){
        printf("Not a letter, re-enter letter: ");
        fgets(guess, 16, stdin);
        if (guess[0] >= 65 && guess[0] <= 90){
            guess[0] = guess[0] + 32;
        }
    }
    while (guess[0] > 90 && guess[0] < 97){
        printf("Not a letter, re-enter letter: ");
        fgets(guess, 16, stdin);
        if (guess[0] >= 65 && guess[0] <= 90){
            guess[0] = guess[0] + 32;
        }
    }
/*
    End of Dylan McGoldrick's code
*/


/*
    Start of Nicholas Verhelle's code
*/

    //Displaying guess
    enteredLetter = guess[0];
    printf("You entered %c\n", enteredLetter);
  
    prevcorrect = amtcorrect;
    //Checking guess
    int i = 0;
    for(i=0; i < WordLength; i++) {
        if (Guessedletters[i] == 1) {
         continue;
         }
        if(Guessedletters[i] == 0 && enteredLetter == posWords[randPick][i]) {
            Guessedletters[i] = 1;
            amtcorrect++;
            blanks[i] = enteredLetter;
        }
        
    }
    //Displaying missing and correct guesses
    for(q=0; q < WordLength; q++) {
      printf("%c ", blanks[q]);
    }
  printf("\n");
    //If guessed letter is incorrect
    if (prevcorrect == amtcorrect) {
      (*ptrLives)--;
      printf("Nope not right :(\n");
      if ((*ptrLives) == 0) {
        break;
      }
    }
    else {
      printf("You got one :)\n");
  }
  //Printing and checking user still has lives
  printf("%d\n", (*ptrLives));
  }
  if ((*ptrLives) == 0) {
    printf("You failed, rip my man, the word was %s\n", posWords[randPick]);
  }
  else {
    printf("Congrats on the dub :D\n");
  }
return 0;
}
/*
    End of Nicholas Verhelle's code
*/
