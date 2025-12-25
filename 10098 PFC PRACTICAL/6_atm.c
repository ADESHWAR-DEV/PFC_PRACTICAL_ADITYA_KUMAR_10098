#include <stdio.h>
int main() {
    // ADITYA 10098
    int pin = 2585, input ,attempts = 3;
    while(attempts > 0) {
        scanf("%d", & input);
        if(input == pin) {
            printf("Access Granted");
            return 0;
        } else {
            attempts--;
            printf("Wrong PIN\n");
        }
    }
    printf("Card Blocked");
    return 0;
}

// OUTPUT
// 4050
// Access Granted
// 3050
// Wrong PIN