//
// Created by Nathan Baelen on 22/10/2019.
//

#include "stdio.h"
#include "math.h"

void cube(int number) {
    int somme = 0;
    int split = number;
    while (split > 0) {
        int digit = split % 10;
        somme += pow(digit, 3);
        split /= 10;
    }
    if (somme == number)
        printf("Le nombre %d est égal à la somme de ses digits\n", number);
    else
        printf("Le nombre %d n'est pas égal à la somme de ses digits\n", number);
}