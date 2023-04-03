//24.	Sum of common factors   smcf(84,105)=3+7+21=31

#include <stdio.h>

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int smcf(int a, int b) {
    int i, smaller, sum = 0;
    smaller = (a < b) ? a : b;
    for(i = 2; i <= smaller; i++) {
        if(a % i == 0 && b % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    int result = smcf(num1, num2);

    printf("The sum of common factors of %d and %d is %d\n", num1, num2, result);

    return 0;
}
