#include <stdio.h>
#include <conio.h>
#include <string.h>

#define DIFF 32
#define A 65
#define a 97

void toUppercase(char *string);
void toLowercase(char *string);

int main()
{
    char string1[100], string2[100];
    gets(string1);
    toUppercase(string1);
    printf("uppercased string: %s\n", string1);
    gets(string2);
    toLowercase(string2);
    printf("lowercased string: %s\n", string2);
    getch();
    return 0;
}

void toUppercase(char *string) {
  while (*string) {
    if (*string - A >= DIFF) {
      *string = *string - DIFF;
    }
    string++;
  }
}

void toLowercase(char *string) {
  while (*string) {
    if (*string - A <= DIFF) {
      *string = *string + DIFF;
    }
    string++;
  }
}