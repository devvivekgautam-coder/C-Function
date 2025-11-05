#include <stdio.h>

void checkDivisible();
    
int main() {
    
    checkDivisible(); 
    
    return 0;
}

void checkDivisible() {
    int num;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    if ((num % 3 == 0) && (num % 5 == 0)) {
        printf("Number is divisible by both 3 and 5.\n");
    } 
    else 
    {
        printf("Number is not divisible by both 3 and 5.\n");
    }
}