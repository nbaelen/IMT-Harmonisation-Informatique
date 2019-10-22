//
// Created by Nathan Baelen on 22/10/2019.
//

#include "stdio.h"
#include "math.h"

void piCalcul() {
    int precision = 1000;
    int inside = 0, outside = 0;
    for (int i = 0; i < precision; i++) {
        for (int j = 0; j < precision; ++j) {
            double module = sqrt(pow(i, 2) + pow(j, 2));
            if (module < precision) inside++;
            else outside++;
        }
    }
    printf("Intérieur : %d, Extérieur : %d, Total : %d\n", inside, outside, inside + outside);
    double pi = ((double) inside) / ((double) inside + (double) outside);
    printf("PI : %f", pi * 4);
}
