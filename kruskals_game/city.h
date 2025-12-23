#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma once

typedef struct City{
    //City name
    char* name;

    //Coordinate of city
    int x;
    int y;


} City;

City create_city(char* name, int x, int y);
