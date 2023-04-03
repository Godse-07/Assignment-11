//21.	Sum of smallest factors    susf(24,35)=2+5=7

#include <stdio.h>

int smallestFactor(int num) {
    for(int i = 2; i <= num; i++) {
        if(num % i == 0) {
            return i;
        }
    }
    return num;
}

int sumOfSmallestFactors(int num1, int num2) {
    int sf1 = smallestFactor(num1);
    int sf2 = smallestFactor(num2);

    return sf1 + sf2;
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    int susf = sumOfSmallestFactors(num1, num2);

    printf("Sum of smallest factors of %d and %d is %d", num1, num2, susf);

    return 0;
}
