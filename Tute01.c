/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int num1,num2; // variables
  int total;
  float average;

  printf("First subject marks : ");
  scanf("%d", &num1); // getting first mark

  printf("Second subject marks : ");
  scanf("%d", &num2); //getting Second mark

  total = num1 + num2;
  average = total / 2.0; //Calculating averge

  printf("Average of Two subject = %.2f ",average); //display the output

  return 0;
}

