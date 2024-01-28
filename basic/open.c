/*
 * open.c
 *
 *  Created on: Sep. 6, 2022
 *      Author: ssehra
 */
// This program prints a statement on whether the given file is open or not.

#include<stdio.h>
#include<fcntl.h>
int main(){

int file_descriptor;
char filename[255];
printf("Enter the filename: "); scanf("%s", filename);
// Setting Permission to Read Only for the file.
file_descriptor = open(filename, O_RDONLY);
//On Success: It returns any value other than -1.
if(file_descriptor != -1){
printf("%s Opened Successfully!",filename);
}else{
printf("Unable to Open %s",filename);
}
return 0;
}
