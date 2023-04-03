//34.	Define function int abc(int x) to find the factorial of first digit of number x. In this function any loop should not be used. [Hint: use function fd and fact]. abc(6413)=720.



#include <stdio.h>

int fd(int x) {
    while (x >= 10) {
        x /= 10;
    }
    return x;
}


int fact(int x) {
    int result = 1;
    for (int i = 2; i <= x; i++) {
        result *= i;
    }
    return result;
}


int abc(int x) {
    int first_digit = fd(x);
    return fact(first_digit);
}


int main() {
    int x;
    scanf("%d", &x);
    printf("abc(%d) = %d\n", x, abc(x));
    return 0;
}
