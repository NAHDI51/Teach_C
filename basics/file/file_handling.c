#include <stdio.h>

int main(int argc, char** argv) {
  // stdin, stdout;

  /*
    three modes:
    "w" -> write (erases previously written things)
    "r" -> read 
    "a" -> append (doesn't erase previously written things)   
  */

  // basic file opening: FILE DESCRIPTOR
  FILE *fp = fopen("output.txt", "w");
  if(fp == NULL)  {// 0x0000 
    printf("File not opened properly!\n");
    return 1;
  }
  // print something in the file
  fprintf(fp, "Hello file, first message\n");

  // READ -> scanf
  // WRITE -> fprintf
  FILE *fpRead = fopen("input.txt", "r");
  if(fpRead == NULL) {
    printf("Error: file not opened.\n");
    return 1;
  }
  int c;
  fscanf(fpRead, "%d", &c);
  fprintf(fp, "Your vairable is: %d\n", c);

  // closing the files
  fclose(fpRead);
  fclose(fp);
}