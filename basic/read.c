/*
 * read.c
 *
 *  Created on: Sep. 6, 2022
 *      Author: ssehra
 */
//This program prints the number of bytes that were read and then prints the content.
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <fcntl.h>
int main() {
int file_descriptor, size;
char filename[255];
char *content = (char *) calloc(100, sizeof(char));

printf("Enter the filename to read:");
scanf("%[^\n]%*c",filename);
file_descriptor = open(filename, O_RDONLY);
// Program exit if the given file is not found.
if (file_descriptor == -1) {
perror("File Not found.");
exit(1);
}

size = read(file_descriptor, content, 100);
printf("Number of bytes returned are: %d\n", size); content[99] = '\0';
printf("File Content: %s\n", content);
// Closes the file descriptor. close(file_descriptor);
return 0;
}


