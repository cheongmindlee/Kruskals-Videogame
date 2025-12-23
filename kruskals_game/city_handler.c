#include <stdio.h>
#include <stdlib.h>
#include "city.h"

// Take in city data from a file and create a list of city objects
int* load_cities(char* filename){
    FILE* file = fopen(filename, "r");
    if (!file) {
        perror("Failed to open file");
        return NULL;
    }


    int num_cities = 0;
    int capacity = 8;
    //Create the array of cities we will take in
    City* cities = malloc(sizeof(City) * 8);

    int size = 0;
    char line[100];
    while(fgets(line, sizeof(line), file)){
        char name[100];
        int x;
        int y;
        if(sscanf(line, " %100[^,], %d, %d", name, &x, &y) == 3){
            size++;
            //Add more space into the array if we have more cities to add

            if(size == capacity){
                capacity *= 2;
            }
            cities = realloc(cities, sizeof(City) * capacity);
            City c = create_city(name, x, y);
            cities[size++] = c;
        }
    }

    fclose(file);

    //We want to make the cities into a nxn adjaceny matrix to hold the distance to each city
    int matrix[10][10];
    return matrix[10][10];
   //return cities;
}