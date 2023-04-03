//6.	Last even digit                led(23145)=4      led(683)=8

#include <stdio.h>

int lastEvenDigit(int num) {
    int digit, lastEven = -1;
    while (num != 0) {
        digit = num % 10;
        if (digit % 2 == 0) {
            lastEven = digit;
            break;
        }
        num /= 10;
    }
    return lastEven;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int lastEven = lastEvenDigit(num);
    
    if (lastEven == -1) {
        printf("No even digits found.\n");
    } else {
        printf("The last even digit is %d.\n", lastEven);
    }
    
    return 0;
}
