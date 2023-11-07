#include <stdio.h>

void drawing(int* ptrLives) {
if ((*ptrLives) == 6) {
printf("You have 6 attempts left\n");
printf("  +---+\n  |   | \n      |\n      |\n      |\n      | \n =========\n"); 
}



if ((*ptrLives) == 5) {
printf("You have 5 attempts left\n");
printf("  +---+\n  |   | \n  O   |\n      |\n      |\n      | \n =========\n"); 
}



if ((*ptrLives) == 4) {
printf("You have 4 attempts left\n");
printf("  +---+\n  |   | \n  O   |\n  |   |\n      |\n      | \n =========\n"); 
}



if ((*ptrLives) == 3) {
printf("You have 3 attempts left\n");
printf("  +---+\n  |   | \n  O   |\n /|   |\n      |\n      | \n =========\n"); 
}



if ((*ptrLives) == 2) {
printf("You have 2 attempts left\n");
printf("  +---+\n  |   | \n  O   |\n /|\\  |\n      |\n      | \n =========\n"); 
}


if ((*ptrLives) == 1) {
printf("You have 1 attempt left\n");
printf("  +---+\n  |   | \n  O   |\n /|\\  |\n /    |\n      | \n =========\n"); 
}

if ((*ptrLives) == 0) {
printf("You are dead.\n");
printf("  +---+\n  |   | \n  O   |\n /|\\  |\n / \\  |\n      | \n =========\n"); 
}
}
