//16.	Second smallest factor    ssf(130)=5   ssf(24)=3

#include <stdio.h>

int secondSmallestFactor(int num) {
    int i, smallest = -1, secondSmallest = -1;

    for(i = 2; i <= num; i++) {
        if(num % i == 0) {
            if(smallest == -1) {
                smallest = i;
            }
            else if(secondSmallest == -1) {
                secondSmallest = i;
            }
            else {
                if(i < smallest) {
                    secondSmallest = smallest;
                    smallest = i;
                }
                else if(i < secondSmallest) {
                    secondSmallest = i;
                }
            }
        }
    }

    return secondSmallest;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int secondFactor = secondSmallestFactor(num);

    if(secondFactor == -1) {
        printf("The number is prime");
    }
    else {
        printf("Second smallest factor of %d is %d", num, secondFactor);
    }

    return 0;
}
