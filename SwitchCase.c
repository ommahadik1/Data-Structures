// In this program, we will convert an integer to its word representation.
// The program will read an integer from the user, and then print out the corresponding words for  
// each digit in reverse order.
// For example, if the user inputs 123, the output will be "one two three" 
#include <stdio.h>

int main() {
    int num, i = 0, x;

    // An array to hold pointers to the word strings.
    char *word_array[2000];

    printf("Enter an integer value:\n");
    scanf("%d", &num);

    if (num < 0) {
        printf("Negative numbers are not supported.\n");
        return 1;
    }

    if (num == 0) {
        printf("zero\n");
        return 0;
    }

    // Store the word for each digit in the array
    while (num > 0) {
        int digit = num % 10;
        num = num / 10;

        switch (digit) {
            case 0: word_array[i++] = "zero"; break;
            case 1: word_array[i++] = "one"; break;
            case 2: word_array[i++] = "two"; break;
            case 3: word_array[i++] = "three"; break;
            case 4: word_array[i++] = "four"; break;
            case 5: word_array[i++] = "five"; break;
            case 6: word_array[i++] = "six"; break;
            case 7: word_array[i++] = "seven"; break;
            case 8: word_array[i++] = "eight"; break;
            case 9: word_array[i++] = "nine"; break;
        }
    }

    // Print the words in the correct (reverse) order.
    printf("Result: ");
    for (x = i - 1; x >= 0; x--) {
        printf("%s ", word_array[x]);
    }
    printf("\n");

    return 0;
}
