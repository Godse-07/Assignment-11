//31.	Sum of digits between given range sdm(23158,3,9)= 8+5+3=16. sdm(516984,5,8)=8+6+5=19

#include <stdio.h>

int sdm(int n, int a, int b) {
    int sum = 0;
    
    while (n > 0) {
        int digit = n % 10;
        if (digit >= a && digit <= b) {
            sum += digit;
        }
        n /= 10;
    }
    
    return sum;
}

int main() {
    int n;
    int a;
    int b;
    scanf("%d %d %d", &n,&a,&b);
    printf("Sum of digits between %d and %d in %d is %d\n", a, b, n, sdm(n, a, b));
    
    
    return 0;
}
