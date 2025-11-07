#include <stdio.h>

void fact();

int main() {

    fact();  
    
    return 0;
}

void fact() {
    int num, fact = 1;

    printf("Enter any num: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        fact = fact * i;
    }

    printf("Factorial: %d", fact);
}