//
// Created by Nathan Baelen on 18/10/2019.
//

#include "stdio.h"

void volee() {
    int input;
    int max;

    while (input != -1) {
        printf("Entrer un entier (-1 pour terminer) : ");
        scanf("%d", &input);
        if (input > max) max = input;
    }
    printf("Le plus grand nombres est : %d",max);
}