//5.	Sum of first and third digits    sft(27145)=2+1=3

#include <stdio.h>

int sumFirstAndThirdDigit(int n) {
    int firstDigit, thirdDigit, sum,m;
    m=n;
    while (n>=10){
        n/=10;
    }
    firstDigit=n;
    thirdDigit=(m / 100) % 10;
    
    // Compute the sum
    sum = firstDigit + thirdDigit;
    
    return sum;
}

int main() {
    int num;
    scanf("%d", &num);
    int sum = sumFirstAndThirdDigit(num);
    printf("The sum of the first and third digits is %d\n", sum);
    return 0;
}
