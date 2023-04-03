//22.	Smallest common factor   scf(84,105)=3 

#include <stdio.h>

int smallestFactor(int num) {
    for(int i = 2; i <= num; i++) {
        if(num % i == 0) {
            return i;
        }
    }
    return num;
}

int smallestCommonFactor(int num1, int num2) {
    int sf1 = smallestFactor(num1);
    int sf2 = smallestFactor(num2);

    while(sf1 != sf2) {
        if(sf1 < sf2) {
            num1 /= sf1;
            sf1 = smallestFactor(num1);
        }
        else {
            num2 /= sf2;
            sf2 = smallestFactor(num2);
        }
    }

    return sf1;
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    int scf = smallestCommonFactor(num1, num2);

    printf("Smallest common factor of %d and %d is %d", num1, num2, scf);

    return 0;
}
