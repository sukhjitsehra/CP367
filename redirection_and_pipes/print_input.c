/**
 * The above function reads input from stdin until EOF and outputs each line read.
 * 
 * Usage: ./print_input > out.txt << HERE
 * first line of data
 * second line of data
 * ...
 * last line of data
 * HERE
 */
 

#include <stdio.h>

int main() {
    char buffer[1024]; // Buffer to hold input

    // Read from stdin until EOF
    while (fgets(buffer, sizeof(buffer), stdin)) {
        printf("%s", buffer); // Output the read line
    }

    return 0;
}
