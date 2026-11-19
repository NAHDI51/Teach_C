#include <stdio.h>

// return an n
void printTable(int n) {
  // 0 based index
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      printf("(%d %d) ", i, j);
    }
    printf("\n");
  }
}

void printReverseTriangle(int n) {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(j <= (n-1-i)) printf("* ");
    }
    printf("\n");
  }
}

void printReverseInvTriangle(int n) {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(j >= i) printf("*");
      else printf(" ");
    }
    printf("\n");
  }
}

int main() {
  int n = 5;
  if(n == 0){
   return 1;  // exit immediately
  }
  printReverseTriangle(n);
  printReverseInvTriangle(n);
}