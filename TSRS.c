#include <stdio.h>

int sumof();

int main () {
    int size;

    printf("Enter size of array : ");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++) {
        printf("Enetr array element : ");
        scanf("%d", &array[i]);
    }

    sumof(array, size);
    return 0;
}

int sumof(int array[], int size)  {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum = sum + array[i];
    }
    printf("Sum : %d", sum);
}