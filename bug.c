
/*
* This program has deliberate errors.
* Use gdb to assist you locating them.
* Please note that you are unwise to
* simply copy and paste from a pdf into a
* text editor as some hidden characters that
* impact on the compiler may be inserted.
*/

/*allocation for array size*/
#define SIZE 10
#define EXTRA 2

#include <stdio.h>
#include <stdlib.h>
/*extra libraries for the random number generator*/
#include <string.h>
#include <time.h>
int main() {
    int i,j[SIZE];
    int *intArray;
    char string[50];
    intArray = j+EXTRA;
    /*need to initialise/seed the random number generator*/
    srand(time(NULL));
    for (i = 0; i <= 10; i++) {
        intArray[i] = rand() % 10;
    }
    printf("''string'' is %ld characters long\n", strlen(string));
    strcpy(string, "This is a medium sized string");
    printf("''string'' is %ld characters long\n", strlen(string));
    return EXIT_SUCCESS;
}
