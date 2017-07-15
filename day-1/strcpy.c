#include<stdio.h>
#include <conio.h>
#include<string.h>

int main()
{
    char source[] = "C Program";
    char destination[50];
    strcpy(destination, source);
    printf("Source string: %s\n", source);
    printf("Destination string: %s\n", destination);
    getch();
    return 0;
}
