#include <stdio.h>

int main() {
    char huruf;
    scanf("%c",&huruf);
    if(huruf == 'A' || huruf == 'E' || huruf == 'I' || huruf == 'O' || huruf == 'U') {
        printf("Vowel");
    } else {
        printf("Consonant");
    }
    
    return 0;
}
