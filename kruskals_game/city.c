#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "city.h"

typedef struct City{
    //City name
    char* name;

    //Coordinate of city
    int x;
    int y;


} City;

//Create a city object
City create_city(char* name, int x, int y){
    City city;
    city.name = malloc(strlen(name) + 1);
    strcpy(city.name, name);
    city.x = x;
    city.y = y;
    return city;
}

//Free memory allocated for a city
void free_city(City* city){
    free(city->name);
}