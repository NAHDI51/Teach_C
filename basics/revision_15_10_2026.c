#include <stdio.h>

// anything that starts with # -> preprocessor

// NEVER USE SEMICOLON IN PREPROCESSOR
// ***always executes before compilation***
// replace one thing with something else
#define PI 3.14159
#define ll long long
// #define a abc

int main() {
  // %md, %-md, %-m.nlf, %m.nlf

  // printf("%lf\n", PI);

  long long ld = 5293492342;
  // ll lct = 234982348; // ll defined as #define (preprocessor)
  // int ll = 293; // VALID IFF ll is not defined as long long
  // int long long = 293;  // can't name the variable long long.
  // printf("%lld, %lld\n", ld, ll);
  int a = 514;
  printf("%d\n", a);


  int a = 10534583;
  // float -> 4 byte, double -> 8 bytes
  float b = 3.14;
  double c = 1.2534325;

  // 8d -> total 8 ta ghor nite parbe (including the number itself)
  printf("a: %8d\n", a);
  printf("b: %7.1f\n", b);
  printf("c: %5.3lf\n", c);

  // same jinish e hobe
  printf("a: \t%-4d\n", a);
  printf("b: %-8.5f\n", b);

  // special character -> \n, \t, \a, \\, 

  // value assign -> initialization
  int d;
  printf("%d\n", d);  // garbage value

  // identifier: any good valid variable names
  int oneTwoThree = 5;  // camel case
  int not_equals_5 = 4; // underscore naming

  for(int i = 5; i < 15; i++) 
  // block
  {
    // p's scope is this block
    int p = 10;
  }
  // error: p out of scope
  // printf("%d\n", p);

  int p = 6;
  while(p <= 5) {
    /*...*/
  }
  do {
    /*...*/
  } while(p <= 5);

  // off by one error
  for(int i = 1; i < n; i++);
  // logical error: wrong iterations
  for(int i = 0; i < n; i++);

  // 19-20 error
  for(int i = 1; i <= n; i++);
  for(int i = 0; i <= n; i++);

  /*
    // precedence rule
    BEDMAS => Bracket, Exponentation, Division, 
    Multiplication, addition, substraction
  */
  // int q = 5 + 3 * 3;
  // int q = -5; // -/+ -> unary operator
  int q = 5 - 3;  // +/- -> works on two values -> not unary operator
  // jei operator works on only value -> unary operator
  if(!q) {} // !q -> ! -> unary operator
  q++;  // ++/-- -> unary operator
}