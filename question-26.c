//26.	kth smallest factor              ksf(24,5)=8  ksf(35,2)=7

#include <stdio.h>

int ksf(int num, int k) {
    int count = 0;
    for(int i = 2; i <= num; i++) {
        if(num % i == 0) {
            count++;
            if(count == k) {
                return i;
            }
        }
    }
    return -1; 
}

int main() {
    int num, k;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the value of k: ");
    scanf("%d", &k);

    int result = ksf(num, k);

    if(result == -1) {
        printf("There are less than %d factors for %d\n", k, num);
    } else {
        printf("The %dth smallest factor of %d is %d\n", k, num, result);
    }

    return 0;
}
