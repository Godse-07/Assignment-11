//20.	Sum of numbers                smn(5,9)=5+6+7+8+9=35

#include <stdio.h>

int sumOfNumbers(int start, int end) {
    int sum = 0;

    for(int i = start; i <= end; i++) {
        sum += i;
    }

    return sum;
}

int main() {
    int start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    int smn = sumOfNumbers(start, end);

    printf("Sum of numbers from %d to %d is %d", start, end, smn);

    return 0;
}
