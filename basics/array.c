#include <stdio.h>

// assign arr[index] = value;
void modify(int arr[], int index, int value) {
  arr[index] = value;
}

int main() {
  // array
  int SIZE = 10;
  int arr[SIZE];

  // direct intialization
  int arr2[10] = { 1,2,3,4,5 };
  printf("%d\n", arr2[6]);  // garbage value

  double arrd[10] = {1.1, 2.2, 3.34};

  int table[10][10];
  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 10; j++) {
      // printf("%d ", table[i][j]); // row major traversal
      scanf("%d", &table[i][j]);
    }
  }

  for(int j = 0; j < 10; j++) {
    for(int i = 0; i < 10; i++) {
      printf("%d ", table[i][j]); // column major traversal
    }
  }
  /*
    1*1 1*2 1*3... 1*10
    2*1 2*2 2*3 ... 2*10
    3*1 3*2 3*3 ... 3*10
    ...
    10*1 10*2 10*3 ... 10*10
  */
  int tab[N][N];

  // tab[i][j] -> same as int a, b;

  // segmentation fault -> unallocated memory
  // printf("%d\n", arr[2348]);  // indexOutOfBoundException show

  // segmentation fault is hard to debug, because it crashes the program

  // reverse all the elements of the array (homework)

  

  // taking input (0 based)
  for(int i = 0; i < SIZE; i++) {
    printf("enter element no %d: ", i+1);
    scanf("%d", &arr[i]);
  }

  // editing an element
  modify(arr, 2, 10);

  // print the elements
  for(int i = 0; i < SIZE; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}