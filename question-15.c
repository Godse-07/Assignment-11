//15.	Sum of factors                 sof(35)=5+7+35=47

#include <stdio.h>

int sumOfFactors(int num) {
    int i, sum = 0;

    for(i = 2; i <= num; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int sum = sumOfFactors(num);

    printf("Sum of factors of %d is %d", num, sum);

    return 0;
}
