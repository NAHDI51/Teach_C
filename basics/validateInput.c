#include <stdio.h>
#include <stdbool.h>

int main() {
  int n;

  bool input_taken = false;

  // loop and boolean flag -> validate
  while(!input_taken) {
    printf("Enter your input: ");
    scanf("%d", &n);

    if(1 <= n && n <= 100) {
      // Input is valid
      input_taken = true;
    } else {
      // Input is invalid
      printf("[Invalid input! Please try again] ");
    }
  }
  printf("Input taken!\n");
}