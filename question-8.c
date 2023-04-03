//8.	Last digit multiple of 3     ld(619127)=9

#include <stdio.h>

int lastMultipleOf3(int num) {
    int digit;
    while (num != 0) {
        digit = num % 10;
        if (digit % 3 == 0) {
            return digit;
        }
        num /= 10;
    }
    return -1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int lastMultiple = lastMultipleOf3(num);
    
    if (lastMultiple == -1) {
        printf("No multiple of 3 found.\n");
    } else {
        printf("The last multiple of 3 is %d.\n", lastMultiple);
    }
    
    return 0;
}
