#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
  FILE *fp;
  
  fp = fopen("day-3-File/test.txt", "a+");
/*   fprintf(fp, "this is testing for fprintf...\n");
  fputs("this is testing for fputs...\n", fp);
  fclose(fp); */

  // write user input to a file
  char data[50];
  while (strlen(gets(data)) > 0)
  {
    fputs(data, fp);
    fputs("\n", fp);
  }

  // closing the file
  printf("closing the file test.txt");

  getch();
  return 0;        
}