//7.	Sum of even digits          sed(23145)=2+4=6

#include <stdio.h>

int sumEvenDigits(int num) {
    int digit, sum = 0;
    while (num != 0) {
        digit = num % 10;
        if (digit % 2 == 0) {
            sum += digit;
        }
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int sumEven = sumEvenDigits(num);
    
    if (sumEven == 0) {
        printf("No even digits found.\n");
    } else {
        printf("The sum of even digits is %d.\n", sumEven);
    }
    
    return 0;
}
