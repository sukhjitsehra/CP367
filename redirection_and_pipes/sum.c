/**
 * This C program reads input values until the end of file (EOF) is encountered, calculates their sum,
 * and prints the result.
 * 
 * Useage: ./sum < in.txt > out.txt
 */

#include <stdio.h>
int main() {
    int sum = 0, value;
    // Read the input until EOF is encountered!!
    while (scanf("%d", &value) != EOF) {
        sum += value;
    }
    printf("Sum: %d\n", sum);
    return 0;
}
