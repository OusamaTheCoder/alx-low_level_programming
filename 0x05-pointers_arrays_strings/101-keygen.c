#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 12 


char generateRandomChar(const char *charset, int charsetLength) {
    return charset[rand() % charsetLength];
}

int main() {
    const char *uppercaseLetters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char *lowercaseLetters = "abcdefghijklmnopqrstuvwxyz";
    const char *numbers = "0123456789";

    const char *charset = strcat(strcat(uppercaseLetters, lowercaseLetters), numbers);
    int charsetLength = strlen(charset);

    char password[PASSWORD_LENGTH + 1];

    
    srand((unsigned int)time(NULL));

    
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = generateRandomChar(charset, charsetLength);
    }

    password[PASSWORD_LENGTH] = '\0';

    
    printf("%s\n", password);

    return 0;
}

