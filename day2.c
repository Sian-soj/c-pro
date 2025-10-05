// learning In the next exercise,
// you will need to create a program which prints out the sum of the numbers a, b, and c.

#include <stdio.h>

int main() {
  int a = 3;
  float b = 4.5;
  double c = 5.25;
  float sum;

  /* Your code goes here */
  sum = a + b + c ;

  printf("The sum of a, b, and c is %f.", sum);

  // Array time!!

  // In C, array initialization uses curly braces {}
  int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // A for loop is a better way to print all elements of an array
  printf("\n\n--- Array Elements ---\n");
  for (int i = 0; i < 10; i++) {
    printf("%d\n", numbers[i]);
  }

  int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  printf("\n--- Array Elements ---\n")
  printf("%d\n", numbers[0]);
  printf("%d\n", numbers[1]);
  printf("%d\n", numbers[2]);
  printf("%d\n", numbers[3]);
  printf("%d\n", numbers[4]);
  printf("%d\n", numbers[5]);
  printf("%d\n", numbers[6]);
  printf("%d\n", numbers[7]);
  printf("%d\n", numbers[8]);
  printf("%d\n", numbers[9]);

  // so the thing is arrays have indexs which range from 0 to n-1 where is the range of the array

  /*The code below does not compile, because the grades variable is missing.
One of the grades is missing. Can you define it so the grade average will be 85?*/

  printf("\n--- Grade Average ---\n");

  /* TODO: define the grades variable here */
  int average;
  int grades[3];
  grades[0] = 80;
  grades[1] = 85; // This was 75 in your code.
  /* TODO: define the missing grade
     so that the average will sum to 85. */
  // To get an average of 85, the sum must be 85*3 = 255.
  // 80 + 85 + 90 = 255.
  grades[2] = 90; 

  average = (grades[0] + grades[1] + grades[2]) / 3;
  printf("The average of the 3 grades is: %d", average);

  return 0;
}
