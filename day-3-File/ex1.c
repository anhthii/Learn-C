#include <stdio.h>
#include <conio.h>

int main() {
  FILE *fp;
  char input[50];

  fp = fopen("day-3-File/test2.txt", "w");
  if (fp != NULL) {
    fprintf(fp, gets(input));
    fprintf(fp, "\n");
    printf("The file test2.txt created successfully");
  }

  fclose(fp);
  getch();
}