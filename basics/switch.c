#include <stdio.h>

int main() {
  int day, week;
  printf("Enter day: ");
  scanf("%d", &day);

  printf("Enter week: ");
  scanf("%d", &week);

  /*
    1st weekend of the month
    2nd weekend of the month
    3rd weekend of the month
  */
  /*
    switch checks if the value is equal to the case currently being
    considered. If it matches, it then prints the entire sequence 
    succeeding it, unless stopped by break.

    Switch stops at the first break encountered.
  */
 // weekend: Saturday & sunday
  switch(day) {
    // Weekday
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      printf("Weekday!\n");
      break;

    // Weekend
    // You can omit one case to work with multiple cases
    case 1:
    case 7:

      switch(week) {
        case 1:
          printf("1st weekend of the month.\n");
          break;
        case 2:
          printf("2nd weekend of the month\n");
          break;
        case 3:
          printf("3rd weekend of the month\n");
          break;
        case 4:
          printf("4th weekend of the month\n");
          break;
        case 5:
          printf("5th weekend of the month\n");
          break;
        default:
          printf("invalid week entry!\n");
          break;
      }
      break;

    // Weekday
    default:
      printf("Either weekday, or invalid\n");
  }

  // **Nested** ifs
  if () {
    if () {
      if () {

      } else if () {

      } else {

      }
    } else {

    }
  }
}