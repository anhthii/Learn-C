#include <stdio.h>
#include <conio.h>
#include <string.h>

void copy_string(char *source, char *target);

int main() {

  char source[100], target[100];
  printf("Enter source string\n");
  gets(source);
  printf("Source string is \"%s\"\n", source);
  copy_string(source, target);
  printf("Target string is \"%s\"\n", target);
  getch();
  return 0;
}

void copy_string(char *source, char *target) {
  while (*source) {
    *target = * source;
    source++;
    target++;
  }

  *target = '\0';
}