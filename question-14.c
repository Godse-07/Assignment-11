//14.	Smallest factor                sf(175)=5       sf(24)=2

#include <stdio.h>

int smallestFactor(int num) {
    int i;

    for(i = 2; i <= num; i++) {
        if(num % i == 0) {
            return i;
        }
    }

    return -1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int factor = smallestFactor(num);

    if(factor == -1) {
        printf("No factor");
    }
    else {
        printf("Smallest factor of %d is %d", num, factor);
    }

    return 0;
}
