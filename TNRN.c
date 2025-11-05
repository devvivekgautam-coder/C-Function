#include <stdio.h>

void cube(int);

int main () {
    int x;
    printf("Enter any num : ");
    scanf("%d", &x);

    cube(x);
    return 0;
}

void cube(int x) {
    printf("Cube : %d", x * x * x);
}