#include <stdio.h>

int main() {
  int a = 10;
  // Precise 
  // 2559999999994 -> imprecise -> precision loss
  double b = 155345.256;
  
  printf("value of a: %4d\n", a);
  // %4.12lf -> 4 gap before writing, .12 -> 12 decimal 
  // numbers after the point

  // IEEE-754 standard -> floating point precision maintain
  // double/floating point
  // too many digits -> precision loss -> 155345.2559999999939464032649994
  printf("Value of b: %4.200lf\n", b);
  printf("Value of b: %.2lf\n", b);
  // 1 -> 0.99999999999999

  // warning: precision used with 'c' conversion specifier, resulting in undefined behavior [-Wformat]
  // 4 space
  char c = 'A';
  // undefined behvaiour
  // printf("Value of c: %4.2c\n", c);
  // a er age 0 -> leading zero
  printf("Value of a: %10.5d\n", a);
  // 
  printf("Value of a: %4.8d\n", a);
  // space + digit size = 8
  printf("Value of a: %8.4d\n", a);

  // scanf formatting
  int i;
  char d;
  double f;
  printf("Enter your input: ");
  // invalid:
  // scanf("%5.3lf", &f);

  // scanf("%5lf", &f);
  // printf("Your input: %lf\n", f);

  printf("Enter your input: ");
  // %3d in printf -> space + size = 3
  // %3d in scanf -> read 3 digits/characters
  scanf("%5lf %c %3d", &f, &d, &i);

  // Enter your input: 56.698748348 c 5669
  // Your values are: 56.690000 8 748
  printf("Your values are: %lf %c %d\n", f, d, i);

  // scanf: check if there are any data in the 
  // input buffer
  double x;
  scanf("%lf", &x);
  printf("Value x: %lf\n", x);
  printf("No scanning needed!\n");

  int charInt, extra;
  scanf("%d %d", &charInt, &extra);
  printf("Value of charInt, extra: %d %d\n", charInt, extra);
}