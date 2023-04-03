//2.	Second digit                    sd(23145)=3     sd(314)=1

#include <stdio.h>

void printSecondDigit(int n) {
   while(n>=100){
    n/=10;
   }
    
    printf("The second digit is %d\n", n%10);
}

int main() {
    int num;
    scanf("%d", &num);
    printSecondDigit(num);
    return 0;
}
