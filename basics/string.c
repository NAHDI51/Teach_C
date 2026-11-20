#include <stdio.h>
#include <string.h> // all string related functions
#include <ctype.h>  // all char related functions

/*
  string.h functions

  strlen(s) -> calculates the length of the string
  strcpy(a, b) -> string copy -> copies a to b
  strcmp(a, b) -> compares a,b -> -1 (a < b), 0 (a = b), 1 (a > b)
  strstr(a, b) -> returns the position of the first occurance of b in a
*/

/*
  ctype.h functions
  isupper(c)  if c is a uppercase character
  islower(c)  if c is a lowercase character
  isdigit(c)  if c is a digit
  isalpha(c)  if c is a alphabet
  toupper(c)  lowercase -> uppercase
  tolower(c)  uppercase -> lowercase
*/

void countVowelConsonant(char* s) {}
void makeUpperCase(char *s) {}
void makeLowerCase(char *s) {}

// calculates the length of the string
int stringLength(char *s) {
  int len = 0;
  for(int i = 0; s[i] != '\0'; i++) len++;
  return len;
}

// normal array? IT CANNOT BE DONE, so we pass size
// int function(int arr[], int size) {}

// BUFFER OVERFLOW: WHEN INPUT CHARACTER SIZE EXCEEDS TOTAL CAPACITY
#define SIZE 10 // CAPACITY -> MAXIMUM STRING LENGTH + 1 (+1 for NULL char)
int main() {
  // string -> array of char
  char str[SIZE] = "abc";  // valid
  // str[0]; // -> char

  // print or scan
  printf("Your string is: %s\n", str);  // str -> char*
  printf("Enter your string: ");

  // printf("Address: %p\n", str); // prints address

  // undefined behaviour: when you enter more char than its capacity
  // scanf("%s", str);  // not exactly recommended

  // what is recommended?
  // 1. Use fgets(name, READ_SIZE, stdin); // stdin -> standard input
  fgets(str, SIZE, stdin);  //RECOMMENDED

  // 2. "Read until newline"
  // scanf("%[^\n]s", str);  //  -> ei specific characters, until newline
  // for more, find this on "grep" -> "regex" (regular expression)

  // NULL CHARACTER '\0'
  // What is NULL? 

  // null assign
  // str[5] = '\0';  // null -> assignable char MARKS THE END OF THE STRING
  printf("Your string is: %s\n", str);

  printf("your length of the string: %d %d\n", strlen(str));
}