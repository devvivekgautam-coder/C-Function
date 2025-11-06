#include <stdio.h>

int len();

int main () {
    char str[100];

    printf("Enter any number : ");
    gets(str);
    
    int length = len(str);

    printf("Length is : %d", length);

    return 0;
}

int len(char str[]) {

    int count = 0;

    while (str[count] != '\0') {
        count++; 
    }

    return count; 
}