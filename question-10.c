//10.	Number of digits             nd(247159)=6     nd(251)=3

#include<stdio.h>

void digit(int n){
    int c=0;
    while(n!=0){
        n/=10;
        c++;
    }
    printf("The digit of the number is = %d", c);
}

int main(){
    int num;
    scanf("%d", &num);
    digit(num);
    return 0;
}