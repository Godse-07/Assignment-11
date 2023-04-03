//11.	Location of biggest digit loc(247156)=4   loc(215)=1

#include <stdio.h>

int locationOfBiggestDigitFromLast(int num) {
    int reverse=num;
    
    int digit, max = -1, loc = -1, count = 1;
    while (reverse != 0) {
        digit = reverse % 10;
        if (digit >= max) {
            max = digit;
            loc = count;
        }
        count++;
        reverse /= 10;
    }
    return loc;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int biggestDigitLocFromLast = locationOfBiggestDigitFromLast(num);
    
    if (biggestDigitLocFromLast == -1) {
        printf("No digits found.\n");
    } else {
        printf("The location of the biggest digit from the end is %d.\n", biggestDigitLocFromLast);
    }
    
    return 0;
}
