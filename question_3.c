//3.	Sum of first two digits    sfs(27145)=2+7=9

#include <stdio.h>

void sum(int n) {
    while (n >= 100) {
        n /= 10;
    }
    printf("The sum is %d\n", (n/10)+(n%10));
}

int main() {
    int num;
    scanf("%d", &num);
    sum(num);
    return 0;
}
