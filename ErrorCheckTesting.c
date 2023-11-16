#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int errorCheck(char* ptrguess, char* prevLetter){
    for (k = 0; k <= strlen(*prevLetter); k++){
        if (*ptrguess[0] == *prevLetter[k] + 32 || *ptrguess[0] == *prevLetter[k]){
            printf("This letter has already been entered. Enter new letter: ");
            fgets(*ptrguess, 16, stdin);
            return 1;
        }
    }
   return 2; 
}



//Error Checking
/*
  char guess[16];
  char* ptrguess[16] = &guess;
  char prevLetter[26];
  char* prevLetter[26] = &prevLetter;
  char enteredLetter;
  char blanks[10];
  int q;
  int j = 0;
 */
/*
    do{
    if (*ptrguess[0] >= 65 && *ptrguess[0] <= 90){
        *ptrguess[0] = *ptrguess[0] + 32;
    }
    while (*ptrguess[0] < 65 || *ptrguess[0] > 122){
        printf("Not a letter, re-enter letter: ");
        fgets(*ptrguess, 16, stdin);
        if (*ptrguess[0] >= 65 && *ptrguess[0] <= 90){
            *ptrguess[0] = *ptrguess[0] + 32;
        }
    }
    while (*ptrguess[0] > 90 && *ptrguess[0] < 97){
        printf("Not a letter, re-enter letter: ");
        fgets(*ptrguess, 16, stdin);
        if (*ptrguess[0] >= 65 && *ptrguess[0] <= 90){
            *ptrguess[0] = *ptrguess[0] + 32;
        }
    }
    *prevLetter[j] = *ptrguess[0];
    int x = errorCheck(guess, prevLetter)
    }(while x == 1);
*/