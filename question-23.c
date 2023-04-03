//23.	Smallest common multiplier lcm(24,36)=72

#include <stdio.h>

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    int result = lcm(num1, num2);

    printf("The LCM of %d and %d is %d\n", num1, num2, result);

    return 0;
}
