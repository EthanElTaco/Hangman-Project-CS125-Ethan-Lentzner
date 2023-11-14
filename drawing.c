#include <stdio.h>
#ifndef HEADER_FILE
#define HEADER_FILE

 /*
    Start of Ethan Lentzner's code
*/

void drawing(int* ptrLives) {
if ((*ptrLives) == 6) {
printf("You have 6 lives left\n");
printf("  +---+\n  |   | \n      |\n      |\n      |\n      | \n =========\n"); 
}



if ((*ptrLives) == 5) {
printf("You have 5 lives left\n");
printf("  +---+\n  |   | \n  O   |\n      |\n      |\n      | \n =========\n"); 
}



if ((*ptrLives) == 4) {
printf("You have 4 lives left\n");
printf("  +---+\n  |   | \n  O   |\n  |   |\n      |\n      | \n =========\n"); 
}



if ((*ptrLives) == 3) {
printf("You have 3 lives left\n");
printf("  +---+\n  |   | \n  O   |\n /|   |\n      |\n      | \n =========\n"); 
}



if ((*ptrLives) == 2) {
printf("You have 2 lives left\n");
printf("  +---+\n  |   | \n  O   |\n /|\\  |\n      |\n      | \n =========\n"); 
}


if ((*ptrLives) == 1) {
printf("You have 1 life left\n");
printf("  +---+\n  |   | \n  O   |\n /|\\  |\n /    |\n      | \n =========\n"); 
}

if ((*ptrLives) == 0) {
printf("You are dead.\n");
printf("  +---+\n  |   | \n  O   |\n /|\\  |\n / \\  |\n      | \n =========\n"); 
}
/*
    End of Ethan Lentzner
*/
}
#endif
