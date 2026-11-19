#include <stdio.h>

int main() {
  // Taking input: scanf
  int b;
  printf("Enter the value of b: ");
  // You can take one input
  scanf("%d", &b);
  printf("The value of b is: %d\n", b);
  int c, d; double e; char f;
  // Of you can take multiple inputs together.
  printf("Enter the value of c d e f: ");
  scanf("%d %d %lf %c", &c, &d, &e, &f);
  printf("The value of c, d, e, f is: %d %d %lf %c \n", c, d, e, f);

  // Exercises: 
  // 1. Calcualte and print the area of the rectangle. Take input of width and heigth 
  // from the user. Inputs should be in int.
  // 2. Calculate and print the area of a circle. Take the input of radius 
  // from the user. Inputs should be in double.
}