#include <stdio.h>

// wrong way of swapping: pass by value
// void swap(int one, int two) {
//   // printf("Address of a, b in swap function: %p %p\n", &a, &b);
//   int temp = one;
//   one = two;
//   two = temp;
// }

// right way of swapping: pass by reference
// pointerA = &a, pointerB = &b
void swap(int* pointerA, int* pointerB) {
  printf("Address of a, b in swap function: %p %p\n", pointerA, pointerB);
  int temp;
  temp = *pointerA;
  *pointerA = *pointerB;  // dereferencing
  *pointerB = temp;
}

int main() {
  int c = 5;  // check address: &c
  printf("Address of C: %p\n", &c);  // address of c;
  // syntax
  int *p; // type of variable that stores (int variable address)

  // stores the address of c
  p = &c;
  printf("address of p and c: %p %p\n", &c, p); // & -> value er moddhe address
  printf("value of p: %d\n", *p); // * -> address er moddhe value

  // modify value of c: change *c er address er value*
  *p = 10;  //*p -> dereferencing value
  printf("Value of p and c: %d %d\n", *p, c);
  printf("Changing the value stored in the address of C changes C too.\n");

  int a = 15, b = 25;
  printf("Value before swapping: %d %d\n", a, b);

  printf("Address of a, b in main: %p %p\n", &a, &b);
  swap(&a, &b);
  printf("Value after swapping: %d %d\n", a, b);
}