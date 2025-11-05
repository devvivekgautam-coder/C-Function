#include <stdio.h>

int main () {
    int num;

    printf("Enter any num : ");
    scanf("%d", &num);

    if ((num % 3 == 0) && (num % 5 == 0)) {
        printf("Num is divisable.");
    }
    else{
        printf("Num is not divisable.");
    }

    return 0;
}