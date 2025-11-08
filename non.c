#include <stdio.h>

void sumof();

int main () {
    printf("Press 1 for + \n");
    printf("Press 2 for - \n");
    printf("Press 3 for * \n");
    printf("Press 4 for / \n");
    printf("Press 5 for %% \n");
    printf("Press 0 for exit \n");
    
    sumof();
    return 0;
}

void sumof() {
    int choose, num1, num2, total;

    printf("Enter your Choise : ");
    scanf("%d", &choose);

    switch (choose) {
        case 1:
        printf("Enter any two number : ");
        scanf("%d %d", &num1, &num2);
        total = num1 + num2;
        printf("Total : %d \n", total);
        break;

        case 2:
        printf("Enter any two number : ");
        scanf("%d %d", &num1, &num2);
        total = num1 - num2;
        printf("Total : %d \n", total);
        break;

        case 3:
        printf("Enter any two number : ");
        scanf("%d %d", &num1, &num2);
        total = num1 * num2;
        printf("Total : %d \n", total);
        break;

        case 4:
        printf("Enter any two number : ");
        scanf("%d %d", &num1, &num2);
        total = num1 / num2;
        printf("Total : %d \n", total);
        break;

        case 5:
        printf("Enter any two number : ");
        scanf("%d %d", &num1, &num2);
        total = num1 % num2;
        printf("Total : %d \n", total);
        break;

        case 0:
        printf("Exeting Programe!!");
        break;

        default :
        printf("Enter a valid number : ");

    }
    
}