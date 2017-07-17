/* 
Write a program in C to read an existing file. Go to the editor
Test Data : 
Input the file name to be opened : test.txt 
Expected Output :
The content of the file test.txt is  :                                                                       
This is the content of the file test.txt.
 */

 #include <stdio.h>
 #include <conio.h>
 
 int main() {
  FILE *fp;
  char filename[10];
  char c;

  printf("Input the file name to be opened: ");
  scanf("%s", filename);

  fp = fopen(filename, "r");
  if (fp != NULL) {
    printf("the content of the file %d is", filename);
    while ((c = fgetc(fp)) != EOF) {
      printf("%c", c);
    }
  }
  getch();
  fclose(fp);
 }