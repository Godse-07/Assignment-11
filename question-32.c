//32.	Define function int fd(int x) to find the first digit of a number x. fd(371)=3.

#include <stdio.h>
#include<stdlib.h>

int fd(int x) {
    x = abs(x);

    while (x >= 10) {
        x /= 10;
    }

    return x;
}

int main() {
    int num;
    scanf("%d", &num);
    int first_digit = fd(num);
    printf("The first digit of %d is %d\n", num, first_digit);
    return 0;
}
