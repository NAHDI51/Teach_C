#include <stdio.h>

int main() {
  // take 10 numbers as input in a loop
  // print the sum of the 10 numbers

  int sum = 0;
  for(int i = 0; i < 10; i++) {
    int number;
    scanf("%d", &number);
    sum += number;
  }
  printf("Your number is: %d\n", sum);

  
  /*
    10 number input
    odd_sum, even_sum
    number -> even -> even_sum
    number -> odd -> odd_sumw
    print even_sum odd_sum
  */
 
}