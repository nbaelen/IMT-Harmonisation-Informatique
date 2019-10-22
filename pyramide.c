//
// Created by Nathan Baelen on 22/10/2019.
//

#include "stdio.h"

void pyramide() {
    int i = 1;
    int size = 7;
    int j;

    while (i < size) {

        //espaces de début
        for (int k = 0; k < size - i; ++k) {
            printf("  ");
        }

        //ligne croissante
        j = 1;
        while (j != i) {
            printf("%d ", j);
            j++;
        }

        //ligne décroissante
        j = i;
        while (j != 0) {
            printf("%d ", j);
            j--;
        }

        //retour chariot
        printf("\n");
        i++;
    }
}