#include <stdio.h>

int main() {
  FILE* fp = fopen("input.txt", "r");
  if(fp == NULL) {
    printf("Could not open file!\n");
    return 0;
  }
  double d; int i; char s[10]; char c;
  fscanf(fp, "%lf %d %s %c", &d, &i, s, &c);
  printf("Your variable: %lf, %d, %s, %c\n", d, i, s, c);
  fscanf(fp, "%lf %d %s %c", &d, &i, s, &c);
  printf("Your variable: %lf, %d, %s, %c\n", d, i, s, c);
}