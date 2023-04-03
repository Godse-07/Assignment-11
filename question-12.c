//12.	Exchange last two digits  ex(21715)=21751 

#include <stdio.h>

int exchangeLastTwoDigits(int num) {
    int lastDigit = num % 10; 
    num /= 10; 
    int secondLastDigit = num % 10; 
    num /= 10; 
    num = num * 10 + lastDigit; 
    num = num * 10 + secondLastDigit; 
    return num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int newNum = exchangeLastTwoDigits(num);

    printf("Number with last two digits exchanged: %d", newNum);

    return 0;
}
