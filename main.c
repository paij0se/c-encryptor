#include <stdio.h>
#include <stdlib.h>
#include "ran.h"


int main() {
  system("clear");
  printf("welcome!\n");
    {
      int i;
      int x = 1;
      char str[100];
      blue(); // color
      printf("\nPlease enter a string: ");
      gets(str);

      for (i = 0;
        (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + 2; // encrypt the string

      printf("Encrypted string: %s\n", str);
      int lower = 1, upper = 100000, count = 1;
      srand(time(0));
      ran(lower, upper, count);
      return 0;

  }
}
