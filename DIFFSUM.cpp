#include <stdio.h>

int main() {
    int number1,number2;
    scanf("%d %d",&number1,&number2);
    if (number1 > number2) {
        printf("%d",number1 - number2);
    } else {
        printf("%d",number1 + number2);
    }
    
    return 0;
}