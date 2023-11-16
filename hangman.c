#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "pointer.h"

/*
    Start of Ethan Lentzner's code
*/

int main() {
    
  srand(time(NULL));                   
  
  char posWords[100][10];
  FILE *file = fopen("WordBank.txt", "r");

  if (file == NULL) {
      printf("ERROR: WordBank.txt file is missing.");
      return 0;
  }

  for (int i = 0; i < 100 && fscanf(file, "%10s", posWords[i]); i++);

/*
    End of Ethan Lentzner's code, Start of Nicholas Verhelle's code
*/

  int randPick = rand() % 100;
  
  //Error check (commet out when playing)
  printf("%s\n", posWords[randPick]);
  
  //Initializing variables
  int lives = 6;
  int* ptrlives = &lives;
  int amtCorrect = 0;
  int prevCorrect = 0;
  
  
  
  int wordLength = strlen(posWords[randPick]);
  char guessedLetters[26] = {0};
  
  char guess[16];
  char enteredLetter;
  char blanks[10];
  int q;

  //Displaying blank letters
  for(q=0; q < wordLength; q++) {
      blanks[q] = '_';
      printf("%c ", blanks[q]);
  }
  printf("\n");
  blanks[q] = 0;
  //Displaying drawing and prompting user input
  while (amtCorrect < wordLength) {
    drawing(ptrlives);
    printf("Enter a letter: ");
    fgets(guess, 16, stdin);
/*
    End of Nicholas Verhelle's code, Start of Dylan McGoldrick's code
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
    End of Dylan McGoldrick's code, Start of Nicholas Verhelle's code
*/

    //Displaying guess
    enteredLetter = guess[0];
    printf("You entered %c\n\n", enteredLetter);
  
    prevCorrect = amtCorrect;
    //Checking guess
    int i = 0;
    for(i=0; i < wordLength; i++) {
        if (guessedLetters[i] == 1) {
         continue;
         }
        if(guessedLetters[i] == 0 && enteredLetter == posWords[randPick][i]) {
            guessedLetters[i] = 1;
            amtCorrect++;
            blanks[i] = enteredLetter;
        }
        
    }
    //Displaying missing and correct guesses
    for(q=0; q < wordLength; q++) {
      printf("%c ", blanks[q]);
    }
  printf("\n");
    //If guessed letter is incorrect
    if (prevCorrect == amtCorrect) {
      (*ptrlives)--;
      printf("Nope not right :(\n");
      if ((*ptrlives) == 0) {
        break;
      }
    }
    else {
      printf("You got one :)\n");
  }
  //Printing and checking user still has lives
  }
  if ((*ptrlives) == 0) {
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
