// Write ac program to check if the number is even or odd using bitwise operator without using stdbool.h

#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer value:\\n");
    scanf("%d", &num);

    if (num & 1) {
        printf("The number %d is odd.\n", num);
    } else {
        printf("The number %d is even.\n", num);

    }
}
