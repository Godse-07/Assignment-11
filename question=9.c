//9.	Biggest digit                    bg(247156)=7     bg(253)=5

#include <stdio.h>

int biggestDigit(int num) {
    int digit, max = -1;
    while (num != 0) {
        digit = num % 10;
        if (digit > max) {
            max = digit;
        }
        num /= 10;
    }
    return max;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int maxDigit = biggestDigit(num);
    
    if (maxDigit == -1) {
        printf("No digits found.\n");
    } else {
        printf("The biggest digit is %d.\n", maxDigit);
    }
    
    return 0;
}
