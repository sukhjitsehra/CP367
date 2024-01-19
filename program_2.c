// Write a program that takes in a positive integer as input, 
// and outputs a string of 1's and 0's representing the integer in reverse binary. 

#include<stdio.h>
int main() {
   int userNum;
   scanf("Enter the number %d", &userNum);
   while (userNum > 1) { 
      printf("%d", userNum % 2);
      userNum = userNum / 2;
   }
   printf("\n");
   return 0;
}

