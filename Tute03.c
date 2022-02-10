/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int n;               //variables
  int count = 1;
  int sum = 0;

  printf("Enter the N number : ");
  scanf("%d", &n); //getting the user input

  while (count <= n)  // starting loop
  {
    sum = sum + count;  //calculation
    ++count;  //increment
  } //end of the loop

  printf("Sum = %d", sum); //output display
  
  return 0;
}

