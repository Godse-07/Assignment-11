//19.	kth last digit                       kld(2314978,3)=9

#include <stdio.h>
#include <math.h>

int kthLastDigit(int num, int k) {
    return abs(num / (int) pow(10, k-1)) % 10;
}

int main() {
    int num, k;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter k: ");
    scanf("%d", &k);

    int kld = kthLastDigit(num, k);

    printf("%dth last digit of %d is %d", k, num, kld);

    return 0;
}
