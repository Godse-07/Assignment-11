//30.	Replace kth last digit by a given digit       rep(231576,3,8)=231876   rep(375468,1,9)=375469

#include <stdio.h>
#include <math.h>


int replace(int num, int k, int digit) {
    int d = log10(num) + 1; 
    int new_num = 0;
    int i = 0;
    while (num > 0) {
        int current_digit = num % 10;
        if (i == k - 1) {
            new_num += digit * pow(10, i);
        } else {
            new_num += current_digit * pow(10, i);
        }
        i++;
        num /= 10;
    }
    if (k == d + 1) { 
        new_num += digit * pow(10, d);
    }
    return new_num;
}

int main() {
    int num = 231576;
    int k = 3;
    int digit = 8;
    printf("Original number: %d\n", num);
    num = replace(num, k, digit);
    printf("Number after replacing kth last digit with %d: %d\n", digit, num);
    return 0;
}
