#include <stdio.h>

void checkPrime();

int main() {
    checkPrime();
    return 0;
}

void checkPrime() {
    int num, i, flag = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not a Prime Number");
        return;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Prime Number");
    else
        printf("Not a Prime Number");
}
