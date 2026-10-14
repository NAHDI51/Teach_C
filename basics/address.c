#include <stdio.h>

// prints n's address
void printAddress(int n) {
  printf("Value of n: %d\n", n);
  printf("Address of n: %p\n", &n);
}

// Different variable
void changeValue(int n) {
  n = 40;
}
// how can I edit values in the function

// pass by reference
// void swap(int* p, int *q) // requires pointer 

void swap(int p, int q) {
  printf("Address of p: %p\n", &p);
  int temp = p;
  p = q;
  q = temp;
}

int main() {
  // C -> low level
  // Pointer -> Low level Stuffs

  // RAM -> Address
  int n;
  scanf("%d", &n);
  printf("Value of n: %d\n", n);
  printf("Address of n: %p\n", &n);

  // are these variable (b,c) same? no
  // are these value (b,c) same? Yes
  int b = 50;
  int c = b;
  c = 40; // Will value of b change? NO

  // pass purely by value -> pass by value

  printf("Value before changing: %d\n", n);
  changeValue(n);
  printf("Value after changing: %d\n", n);

  int p = 10, q = 5;

  printf("Address of p: %p\n", &p);
  printf("Value before swapping: %d %d\n", p, q);
  swap(p, q);
  printf("Value after swapping: %d %d\n", p, q);

}