//1.	First digit                        fd(23145)=2     fd(314)=3

#include <stdio.h>

void printFirstDigit(int n) {
    while (n >= 10) {
        n /= 10;
    }
    printf("The first digit is %d\n", n);
}

int main() {
    int num;
    scanf("%d", &num);
    printFirstDigit(num);
    return 0;
}
