#include <stdio.h>
#include <stdbool.h>

int main() {
  // Basic datatype
  int i = 10;
  float f = 2.17;
  double d = 3.1415;
  char c = '0';
  bool b = true;
  unsigned char lf = 'a';
  
  printf("Integer i: %d \n", i);
  printf("Float f: %f \n", 2.17);

  printf("Char c: %c \n", c);
  printf("Char c in int: %d\n", c);

  printf("Boolean b: %d\n", b);
  printf("\n\n");

  /*
    int => 4 bytes => 32 bit =>
  */
  // sizeof(type) -> returns the bytes
  // unsigned long int
  printf("The size of character: \t %lu bytes\n", sizeof(char)); 
  printf("The size of int type: \t %lu bytes\n", sizeof(int)); 
  printf("alert \a");

  int ch = 67;
  printf("The int: %d\n", ch);
  printf("The char in int: %c\n", ch);

  // Various derived types
  long int li = 1424;
  long long int lli = 1234235235345334ll;
  short int shi = -12;
  
  unsigned short int ushi = 124;
  signed short int sshi = -423;
  unsigned long long int ulli = 3568873868568393932ll;

  printf("long int li: %ld\n", li);
  printf("Long long int: %lld\n", lli);
  printf("Short int: %hu\n", shi);
  printf("Unsigned long: %llu\n", ulli);

  printf("The size of long double: %lu\n", sizeof(long double));


  return 0;
}