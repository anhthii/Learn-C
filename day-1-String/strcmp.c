#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
  char a[100], b[100];
  printf("Enter the first string\n");
  gets(a);
  printf("Enter the second string\n");
  gets(b);

  int flag = strcmp(a, b);

  if (flag == 0) {
    printf("Entered strings are equal");
  } else if(flag > 0) {
    printf("%s is greater than %s", a, b);
  } else {
    printf("%s is less than %s", a, b);
  }
  getch();
}