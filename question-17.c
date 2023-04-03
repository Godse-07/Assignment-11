//17.	Factorial                          fact(5)=120    fact(7)=5040

#include <stdio.h>

int factorial(int num) {
    int i, fact = 1;

    for(i = 1; i <= num; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int fact = factorial(num);

    printf("Factorial of %d is %d", num, fact);

    return 0;
}
