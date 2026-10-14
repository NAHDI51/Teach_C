#include <stdio.h>

// function
// RETURN_TYPE name(parameters) {}

/*
  parameters: a, b
  int -> return type  
*/
int sum(int a, int b) {
  return a+b;
}
/*
  parameter -> define
  argument -> calling
*/

void printNum(int n) {
  printf("Your number is %d\n", n);
  // no return type -> void type returns no type
}

// recursion
void printVal(int n) {
  printf("%d\n", n);
  // one line 
  if(n == 0) return;
  printVal(n-1);
}

int fib(int n) {
  if(n == 1) return 0;
  if(n == 2) return 1;
  return fib(n-1) + fib(n-2);
}

int main(int argc, char** argv) {
  // call -> arguments
  printf("%d\n", sum(5, 10));
  printVal(5);

  int a = 5, b = 10;
  if(a > 5) 
    if(b < 10)
      printf("Reached here.\n");
  else printf("reached point 2.\n");
}