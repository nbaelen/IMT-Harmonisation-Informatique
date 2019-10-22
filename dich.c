//
// Created by Nathan Baelen on 16/10/2019.
//

#include <stdio.h>

int values[4];

int dich() {
    for (int i = 0; i < 3; ++i) {
        printf("Entrer un entier : ");
        scanf("%d",&values[i]);
    }

    /* initialisation */
    values[3]=values[0];

    /* comparaison */
    if (values[3]<values[1]) values[3]=values[1];
    if (values[3]<values[2]) values[3]=values[2];

    /* A completer... affichage de la plus grande valeur */
    printf("La plus grande valeur est %d",values[3]);
    return values[3];
}