//18.	Integer square root          isr(27)=5    isr(49)=7

#include <stdio.h>

int integerSquareRoot(int num) {
    int i;

    for(i = 1; i <= num / 2; i++) {
        if(i * i == num) {
            return i;
        }
        else if(i * i > num) {
            return i - 1;
        }
    }

    return num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int isr = integerSquareRoot(num);

    printf("Integer square root of %d is %d", num, isr);

    return 0;
}
