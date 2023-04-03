//33.	Define function int fact(int x) to find factorial of a number x. fact(4)=24.

#include <stdio.h>

int fact(int x)
{
    if (x == 0 || x == 1) {
        return 1;
    }
    else {
        return x * fact(x - 1);
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, fact(num));
    return 0;
}
