#include <stdio.h>

void calc();

int main()
{
    printf("Press 1 for + \n");
    printf("Press 2 for - \n");
    printf("Press 3 for * \n");
    printf("Press 4 for / \n");
    printf("Press 5 for %% \n");
    printf("Press 0 for exit \n");

    calc();
    return 0;
}

void calc()
{
    int choice, num1, num2, result;

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        result = num1 + num2;
        printf("Result = %d\n", result);
        break;

    case 2:
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        result = num1 - num2;
        printf("Result = %d\n", result);
        break;

    case 3:
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        result = num1 * num2;
        printf("Result = %d\n", result);
        break;

    case 4:
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        result = num1 / num2;
        printf("Result = %d\n", result);
        break;

    case 5:
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        result = num1 % num2;
        printf("Result = %d\n", result);
        break;

    case 0:
        printf("Exiting program...\n");
        break;

    default:
        printf("Invalid choice!\n");
        break;
    }
}
