#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "drawing.h"


int main() {

  srand(time(NULL));
  
  char posWords[][16];
  
  int randPick = rand() % 6;
  printf("%s\n", posWords[randPick]);
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

  
  for(q=0; q < WordLength; q++) {
      blanks[q] = '_';
      printf("%c ", blanks[q]);
  }
  printf("\n");
  blanks[q] = 0;
  
  while (amtcorrect < WordLength) {
    drawing(ptrLives);
    printf("Enter a letter: ");
    fgets(guess, 16, stdin);
    
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
    enteredLetter = guess[0];
    printf("You entered %c\n", enteredLetter);
  
    prevcorrect = amtcorrect;
  
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
    for(q=0; q < WordLength; q++) {
      printf("%c ", blanks[q]);
    }
  printf("\n");
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

