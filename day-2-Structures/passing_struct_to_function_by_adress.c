#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct student
{
    int id;
    char name[20];
    float percentage;
} student;

void func(student *record);

int main() {
    student record;
    record.id = 1;
    strcpy(record.name, "Cool");
    record.percentage = 100;
    func(&record);
    getch();
}

void func(student *record)
{
    printf(" Id is: %d \n", record->id);
    printf(" Name is: %s \n", record->name);
    printf(" Percentage is: %f \n", record->percentage);
}