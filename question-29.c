//29.	Delete kth last digit            dl(4231576,3)=423176

#include <stdio.h>
#include <math.h>


int deleteFromStart(int num, int n)
{
    int d = log10(num) + 1;
     
    int rev_new_num = 0;
     

    for (int i = 0; num != 0; i++) {
        int digit = num % 10;
        num = num / 10;
     
        if (i == (d - n)) {
            continue;
        } else {
            rev_new_num = (rev_new_num * 10) + digit;
        }
    }
     
    
    int new_num = 0;
     
    
    for (int i = 0; rev_new_num != 0; i++) {
        new_num = (new_num * 10) + (rev_new_num % 10);
        rev_new_num = rev_new_num / 10;
    }
     
    
    return new_num;
}
     

int deleteFromEnd(int num, int n)
{
    int rev_new_num = 0;
     
 
    for (int i = 1; num != 0; i++) {
        int digit = num % 10;
        num = num / 10;
     
        if (i == n) {
            continue;
        } else {
            rev_new_num = (rev_new_num * 10) + digit;
        }
    }
     
   
    int new_num = 0;
     
 
    for (int i = 0; rev_new_num != 0; i++) {
        new_num = (new_num * 10) + (rev_new_num % 10);
        rev_new_num = rev_new_num / 10;
    }
     

    return new_num;
}


int main() {
    
    int num;
    scanf("%d", &num);
    printf("Number: %d\n", num);

    
    int n;
    scanf("%d", &n);
    printf("Digit to be deleted: %d\n", n);

    
    printf("Number after %d digit deleted from starting: %d\n", n, deleteFromStart(num, n));

    printf("Number after %d digit deleted from ending: %d\n", n, deleteFromEnd(num, n));

    return 0;
}
