#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct car 
{
    int year;
    char model[10];
    char plate[7];
    int odometer;
    double engine_size;
};

int main() {
    struct car mycar;
    mycar.year = 2017;
    strcpy(mycar.plate, "Cool");
    mycar.odometer = 505069;
    printf("I bought my car in %d\n", mycar.year);
    printf("My car's plate is %s\n", mycar.plate);
    printf("My car's odemeter is %d\n", mycar.odometer);

    struct car *anothercar = malloc(sizeof(struct car));
    (*anothercar).year = 2017;
    strcpy((*anothercar).plate, "very cool");
    anothercar->odometer = 50505; // which is the same as (*anothercar).odometer
    printf("I bought my car in %d\n", anothercar->year);
    printf("My car's plate is %s\n", anothercar->plate);
    printf("My car's odemeter is %d\n", anothercar->odometer);

    getch();
}