//13.	Increment even digits      inc(23768)=33779

#include <stdio.h>

int incrementEvenDigits(int num) {
    int result = 0;
    int multiplier = 1;

    while(num != 0) {
        int digit = num % 10;
        if(digit % 2 == 0) {
            digit++;
        }
        result = result + digit * multiplier;
        multiplier *= 10;
        num /= 10;
    }

    return result;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int newNum = incrementEvenDigits(num);

    printf("Number with even digits incremented: %d", newNum);

    return 0;
}
