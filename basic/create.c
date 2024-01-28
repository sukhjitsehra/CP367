/*
 * create.c
 *
 *  Created on: Sep. 6, 2022
 *      Author: ssehra
 */

#include<stdio.h>
#include<fcntl.h>
int main(){
int file_descriptor;
char filename[255];
printf("Enter the filename: ");
scanf("%s", filename);
// Setting Permission to Read and Write Access for the file.

file_descriptor = creat(filename, O_RDWR | O_CREAT);
if(file_descriptor != -1){
printf("File Created Successfully!");
}
else{
printf("Unable to Create the File");
}
return 0;
}

//A file descriptor is an integer value that identifies the open file in a process. This
//program creates a new file with the given permissions set.

