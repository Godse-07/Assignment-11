//4.	Third digit                    td(23145)=1     td(314)=3

#include <stdio.h>

void printThirdDigit(int n) {
    int thirdDigit;
    
    thirdDigit = (n / 100) % 10;
    
    printf("The third digit is %d\n", thirdDigit);
}

int main() {
    int num;
    scanf("%d", &num);
    printThirdDigit(num);
    return 0;
}
