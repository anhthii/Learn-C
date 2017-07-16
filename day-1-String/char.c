#include <stdio.h>
#include <conio.h>
#include <string.h>

char * getString(int size) {
  char *string;
  printf("Enter a string: ");
  for(int i = 0; i < size + 1; i++)
  {
    if (i == size) {
      string[i] = '\0';
      break;
    }
    scanf("%c", string + i);
  }
  return string;
}


void printString(char *string) {
  printf("You enter the string: %s", string); // %s, s that turn a string array pointer to a sequence of characters
}

int main ()
{
  /*char *string = getString(100);
  printString(string);*/
  char stringArray[100];

  printf("Please write something: \n");
  scanf("%s", stringArray);
  printf("You enter the string %s\n", stringArray);
  getch();
  return 0;
}
