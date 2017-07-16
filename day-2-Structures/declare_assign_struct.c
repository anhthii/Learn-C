#include <stdio.h>
#include <string.h>
#include <conio.h>
 
struct student 
{
     int id;
     char name[30];
     float percentage;
};

int main()
{
    int i;
    struct student record1 = {1, "Cool", 90.5};
    struct student record2 = {2, "Yay", 100};

    printf("Records of STUDENT1: \n");
    printf("  Id is: %d \n", record1.id);
    printf("  Name is: %s \n", record1.name);
    printf("  Percentage is: %f \n\n", record1.percentage);

    printf("Records of STUDENT2: \n");
    printf("  Id is: %d \n", record2.id);
    printf("  Name is: %s \n", record2.name);
    printf("  Percentage is: %f \n\n", record2.percentage);

    getch();
    return 0;
}
 