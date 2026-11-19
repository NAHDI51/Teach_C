#include <stdio.h>

int main() {
  // Garbage value -> when you don't assign value in a
  // Declare + define -> definition & declaration
  int a; 
  printf("Value of a: %d\n", a);

  // assignment
  a = 5;
  printf("Value of a: %d\n", a);

  // assignment => (+) operation
  a += 5; // a = a + 5;
  printf("Value of a: %d\n", a);

  // ((4*5)/2) % 7 -> composite operation 
  // a (=) assignment
  a = ((4*5)/2) % 7;
  printf("Value of a: %d\n", a);

  // "assign" this value to a
  a = (a + 4*3+5);  // expression -> assignment
  a == (a+4*3+5);   // condition -> one kind of expression

  // "assign" this value to (a + 4*3+5)
  // (a + 4*3+5) = a;  // error: expression is not assignable

  // variable = operation/procedure/function call
  //  ||          ||
  // lvalue =   rvalue
  // rvalue : vastly valid
  // lvalue : heavily restricted

  //  invalid lvalue, valid rvalue
  // int b+3 = a+5;
  a = a;  // valid expression: assignment
  a == a; // valid expression: condition

  printf("value of a: %d\n", a);
  if(a % 2 == 0) {
    printf("A is even.\n");
  } else {
    printf("A is odd\n");
  }
  // condition: if this then ok
  if(a == 5) {
    printf("The value of a is 5.\n");
  } else {
    printf("The value of a is not 5.\n");
  }

  // boolean okay = true;
  // if(okay) {
  //   printf("Reached here.\n");
  // }

  // java : compilation error 
  // C: true if a's value is not 0.
  // false if a's value if 0.

  // a = 5, a = -5 -> true
  // a = 0 -> false
  // Not necessarily condition, Expression can be placed too.
  // C evaluates these as boolean values

  // a = 0;  // makes a 0
  if(a) {
    printf("Reached the if block\n");
  } else {
    printf("Reached the else block\n");
  }

  //Assignment in condition
  // assignment -> 

  // assigning a a non-zero value: prints if block.
  // nonzero expression -> always true in C.
  if(a = 5) {
    printf("The value of a is 5.\n");
  } else {
    printf("The value of a is not 5.\n");
  }

  // zero expression = always false in C.
  if(a = 0) {
    printf ("Reached the if.\n");
  } else {
    printf("Reached the else.\n");
  }

  a = 10;
  // check vs assign
  // if(a = 20) // BEWARE: assigns value to a, 
  // so it will evaluate to be always true.
  if(a == 20) {
    printf("The value of a is 20.\n");
  } else{
    printf("The value of a is not 20.\n");
  }

  if(printf("Value of a is %d\n", a)) {
    printf("Reached the if block.\n");
  } else {
    printf("Reached the else block.\n");
  }

  int a = 10;
  // Nested if
  // a is divisble by 5 AND a is divisible by 2
  if(a % 5 == 0 && a % 2 == 0) {
    printf("A is divisible by both 5 and 2 \n");
  }
  if(a % 3 == 0 || a % 2 == 0) {
    printf("A is divisible by 3 or 2 OR both \n");
  }
  // bitwise 
  // >>, <<, &, |, !

  /// !! BEWARE: don't use & instead of &&, | instead of ||
  // without understanding
  if(a % 5 == 0 & a % 2 == 0) {
    printf("Don't misconcept & and &&\n");
  }

  // LEAP YEAR
  int year = 2020;
  /*
    1. year is divisible by 4
    2. year is NOT DIVISIBLE by 100
  */
  if(year % 4 == 0 && year % 100 != 0) {
    printf("Year is leap year.\n");
  } else {
    printf("Not a leap year.\n");
  }

  // ax^2+bx+c = 0
  int a, b, c;
  printf("Enter a, b, c: ");
  scanf("%d %d %d", &a, &b, &c);
  /*
    
  */
  int day;


  return 0;
}