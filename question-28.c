//28.	Sum of first k factors        sm(24,5)=2+3+4+6+8=23

#include <stdio.h>

int sm(int num, int k) {
    int sum = 0, count = 0;
    for(int i=2; i<=num && count<k; i++) {
        if(num%i == 0) {
            sum += i;
            count++;
        }
    }
    return sum;
}

int main() {
    int num, k;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the value of k: ");
    scanf("%d", &k);

    int result = sm(num, k);

    printf("The sum of first %d factors of %d is %d\n", k, num, result);

    return 0;
}
