#include <stdio.h>

int main() {
  int a, b; 
  printf("Enter your values: ");
  scanf("%d %d", &a, &b);

  int answer = 1;
  while(b) {
    if(b%2 == 1) answer = answer * a; // all in 1 condition
    // if(b%2 == 1) answer = answer*a; a++; b++; // WRONG: logical error: only first semicolon is executed.
    printf("Current: b:\t%d, a:\t%d, answer:\t%d\n", b, a, answer);
    b = b / 2;
    a = (a*a);
  }
  printf("Answer is %d\n", answer);
}