#include <stdio.h>
#include <stdlib.h>

// void passArray(int arr[]) {}
void passArray(int *arr) {
  printf("\nALL THE VALUES\n");
  for(int i = 0; i < 10; i++) {
    printf("%d %d\n", arr[i], *(arr+i));
  }
}

// right way of swapping: pass by reference
// pointerA = &a, pointerB = &b
void swap(int* pointerA, int* pointerB) {
  printf("Address of a, b in swap function: %p %p\n", pointerA, pointerB);
  int temp;
  temp = *pointerA;
  *pointerA = *pointerB;  // dereferencing
  *pointerB = temp;
}

void reverseArray(int *arr, int n) {
  // CRITICAL: Syntax error
  int *leftPointer = arr, *rightPointer = arr+n-1;
  while(leftPointer < rightPointer) {
    swap(leftPointer, rightPointer);
    leftPointer++; rightPointer--;
  }
  printf("Array after reversing\n");
  for(int i = 0; i < n; i++) printf("%d ", *(arr+i));
  printf("\n");

  // int a, b, c;  // okay
  // int *p1, *p2, *p3;  // protita pointer er age star in declaration
}

// malloc -> memory allocation
int main() {
  // dynamic memory allocation (NOT IN LECTURES)
  int* arr2 = malloc(10*sizeof(int)); // 10 sized array allocation
  arr2 = realloc(arr2, 5*sizeof(int));  // reallocate to 5 sized array

  // array itself IS A POINTER
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  printf("Value: %d\n", arr[0]);
  printf("Address of arr[0]: %p\n", &arr[0]);
  printf("Address of arr: %p\n", arr);

  reverseArray(arr, 10);

  for(int i = 0; i < 10; i++) {
    printf("Value: %d, address arr[i]: %p, address arr+i: %p\n", 
          arr[i], &arr[i], arr + i);
  }
  passArray(arr);

  int *p;
  printf("Address of p: %p\n", p);
  printf("Address of p: %p\n", p+1);
  printf("\n");
  double *dp;
  printf("Address of dp: %p\n", dp);
  printf("Address of dp: %p\n", dp+1);
}