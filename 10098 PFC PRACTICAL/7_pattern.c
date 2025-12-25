#include <stdio.h>
int main() {
    // ADITYA 10098
    int i, j;
    int rows = 4;
    for (i = 1; i <= rows; i++) {
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}

// OUTPUT
/*
A
AB
ABC
ABCD 
*/