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
        for (int k = 0; k < size - i; ++k) printf("  ");
        //ligne croissante
        for (int k = 1; k < i; k++) printf("%d ", k);
        //ligne décroissante
        for (int k = i; k > 0; k--) printf("%d ", k);

        //retour chariot
        printf("\n");
        i++;
    }
}