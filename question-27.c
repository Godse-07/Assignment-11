//27.	Sum of digits of a number (x) which are more than y mr(273563,4)=6+5+7=18   mr(15732,3)=7+5

#include <stdio.h>

int mr(int num, int y) {
    int sum = 0;
    while(num > 0) {
        int digit = num % 10;
        if(digit > y) {
            sum += digit;
        }
        num /= 10;
    }
    return sum;
}

int main() {
    int num, y;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a value for y: ");
    scanf("%d", &y);

    int result = mr(num, y);

    printf("The sum of digits of %d which are more than %d is %d\n", num, y, result);

    return 0;
}
