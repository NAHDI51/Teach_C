#include <stdio.h>
#include <limits.h> // for INT_MAX
#include <stdbool.h>

// Shows the binary value of the number
void print_binary(int num) {
  for(int i = 31; i >= 0; i--) {
    if(num&(1ll<<i)) printf("1");
    else printf("0");
    if(i%4 == 0) printf(" ");
  }
  printf("\n");
}

int main() {
  // Declaration
  int e = 15;
  float f = 123.123;    // 4 byte
  double d = 1234.1234; // 8 byte
  char c = 'A';
  bool bl = true;

  /*
  categorization
  */
  long int li = 50000;
  long lc = 5000;
  
  long long int lli = 5000;
  long long ll = 500000;

  short int si = 400;

  unsigned long int uiii = 535;
  unsigned long long int uii = 245;
  unsigned short int sui = 353;
  printf("Number: %u  ", uii);
  print_binary(371);

  // print data type size: sizeof(data_type)
  printf("The size of long long (int): %lu\n", sizeof(long long int));
  // Pointer -> memory address
  printf("The address of uii is: %p\n", &uii);

  //datatype.c
  // System.out.println("Your variable c is: " + c);
  // garbage value
  // (2^31-1)
  // printf("Your variable is: %d %d %d %d %d\n", c, d, f, e, INT_MIN);
  // % -> special character, d = decimal
  // %lf -> long float, %f -> float
  // %u -> unsigned
  printf("Your variable is: %d %lf %c\n", e, d, c);
  printf("Your float variable is: %f\n", f);
  printf("Your boolean variable is: %d\n", bl);
  
  // INT_MAX, INT_MIN
  return 0;
}