#include <stdio.h>

int main() {
  // scanf, fscanf

  // 0 -> successfully scans
  // -1 = EOF -> End of File -> unsuccessful scan
  
  FILE *fp = fopen("address.c", "r");
  char ch;

  /*
    3 methods
    1. read with fscanf/fprintf
    2. read with fgetc/fputc
    3. read with fgets/fputs
  */

  // Read all contents of file fp
  int status = fscanf(fp, "%c", &ch); // status -> 0 (success)/ EOF (unsuccess)
  while(status != EOF) {
    printf("%c", ch);
    status = fscanf(fp, "%c", &ch);
  }

  // even easier way 
  while(fscanf(fp, "%c", &ch) != EOF) {
    printf("%c", ch);
  }

  // fgetc, fputc // gets a single char/ puts a single char
  // fgets, fputs // gets a single string/ puts a single string

  // ch = fgetc(fp);
  while(ch != EOF) {
    fputc(ch, stdout); // standard input
    ch = fgetc(fp);
  }

  // 512 -> 2^9 (standard buffer size)
  char buffer[10];
  while(fgets(buffer, 10, fp) != NULL) {
    fputs(buffer, stdout);
    printf("\n");
  }

  fclose(fp);
}