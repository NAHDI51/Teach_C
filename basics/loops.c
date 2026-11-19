#include <stdio.h>

int main() {
  // while, for, do...while()
  int c = 10;

  // condition -> boolean value
  // if(c = 5) -> valid condition -> assignment -> always true

  // if -> non zero value -> true, zero -> false

  // condition
  // while(c = 0) {
  //   printf("%d ", c);
  //   c--;
  // }

  
  // assign c 5.
  // while(c = 5){
  //   printf("Value of c is %d\n", c);
  // }

  c = 10;
  // if(c == 5) {
  //   printf("C is equal to 5\n");
  // } else {
  //   printf("C is not equal to 5\n");
  // }
  // jotokkhon c is equal to 5
  while(c == 5) {
    printf("Value of c is %d\n", c);
  }
  do {
    printf("Value of c is %d\n", c);
  } while(c == 5);

  // for(ASSIGNEMENT/INITIALIZATION; CONDITION; ASSIGNMENT)
  for(int i = 0; i < 10; i++) {
    printf("%d ", i);
  }

  // Slight practice
  // Array
  // function
  // problem solving

  // Pointer
  // File handling
  // String
}