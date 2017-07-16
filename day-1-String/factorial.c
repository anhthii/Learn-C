#include <stdio.h>
#include <conio.h>

int factorial(int num);

int main() {
  int num;
  printf("enter the number: ");
  scanf("%d", &num);
  printf("factorial of %d is %d", num, factorial(num));
  getch();
  return 0;
}

int factorial(int num) {
  if (!num) return 1;
  return num * factorial(num - 1);
}