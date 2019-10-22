//
// Created by Nathan Baelen on 22/10/2019.
//

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "time.h"

void piCalcul2() {
    int precision = 1000;
    int inside = 0, outside = 0;
    int random1, random2;
    srand(time(NULL));
    for (int i = 0; i < precision; i++) {
        random1 = rand() % precision;
        random2 = rand() % precision;
        double module = sqrt(pow(random1, 2) + pow(random2, 2));
        if (module < precision) inside++;
        else outside++;
    }
    printf("Intérieur : %d, Extérieur : %d, Total : %d\n", inside, outside, inside + outside);
    double pi = ((double) inside) / ((double) inside + (double) outside);
    printf("PI : %f", pi * 4);
}
