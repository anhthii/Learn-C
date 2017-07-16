#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    // lowercase string
    char string[] = "LOWER CAse STRING";
    printf("%s\n", strlwr(string));

    // uppercase string
    char string2[] = "uppercase String";
    printf("%s\n", strupr(string2));
    getch();
    return 0;
    
}
