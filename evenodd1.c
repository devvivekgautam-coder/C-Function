#include <stdio.h>

void checkEvenOdd();

int main()
{
    checkEvenOdd();
    return 0;
}

void checkEvenOdd()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Number is Even");
    else
        printf("Number is Odd");
}
