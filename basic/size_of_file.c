// C program to find the size of file
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
  
long int findSize(char file_name[])
{
    // opening the file in read mode
    FILE* fp = fopen(file_name, "r");
  
    // checking if the file exist or not
    if (fp == NULL) {
        printf("File Not Found!\n");
        return -1;
    }
  
    fseek(fp, 0L, SEEK_END);
  
    // calculating the size of the file
    long int res = ftell(fp);

    fseek(fp, 0, SEEK_SET);
  
    // closing the file
    fclose(fp);
  
    return res;
}
  
// Driver code
int main()
{
    char file_name[] = { "read_2.c" };
    long int res = findSize(file_name);
    int readCount;
    int fd;
    if (res != -1)
        printf("Size of the file is %ld bytes \n", res);
    
    char *p ; 
    // malloc() allocate the memory for n chars 
    p = (char *)malloc(res * sizeof(char)); 

    fd = open(file_name, O_RDONLY, 0777);
	
    if(fd < 0){
		printf("Error!\n");
		exit(1);
	}

	readCount = read(fd, p, res);

	while(readCount > 0){
		printf("%.*s\n",readCount,p);
		readCount = read(fd, p, 100);
	}

    return 0;
}