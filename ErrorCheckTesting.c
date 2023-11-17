#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int errorCheck(char* ptrguess, char* prevLetter){
    int k;
    for (k = 0; k <= strlen(prevLetter); k++){
        while (ptrguess[0] == prevLetter[k] + 32 || ptrguess[0] == prevLetter[k] || (ptrguess[0] < 65 || ptrguess[0] > 122) || (ptrguess[0] > 90 && ptrguess[0] < 97)){
            printf("Error. Enter new letter: ");
            fgets(ptrguess, 16, stdin);
            ptrguess[0] = tolower(ptrguess[0]);
        }
        return 1;
    }
   return 2; 
}




//Error Checking
/*
  char guess[16];
  char prevLetter[26] = {0};
  char enteredLetter;
  char blanks[10];
  char alreadyEnt[16];
  int q;
  int j = 0;
  int x;
 */
/*
    do{
    while (guess[0] < 65 || guess[0] > 122){
        printf("Not a letter, re-enter letter: ");
        fgets(guess, 16, stdin);
        if (guess[0] >= 65 && guess[0] <= 90){
            guess [0] = tolower(guess[0]);
        }
    }
    while (guess[0] > 90 && guess[0] < 97){
        printf("Not a letter, re-enter letter: ");
        fgets(guess, 16, stdin);
        if (guess[0] >= 65 && guess[0] <= 90){
            guess [0] = tolower(guess[0]);
        }
    }
    int x = errorCheck(guess, prevLetter);
    prevLetter[j] = guess[0];
    }while (x == 1);
    j++;
*/




//Add dispaly for guessed letters
