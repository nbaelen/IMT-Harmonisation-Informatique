//
// Created by Nathan Baelen on 16/10/2019.
//

#include <stdio.h>

int values[4];

void croissant() {
    printf("Entrer trois valeurs croissantes : ");
    for (int i = 0; i < 3; ++i) {
        scanf("%d",&values[i]);
    }

    printf("Entrer une valeur entre 1 et 30 : ");
    scanf("%d",&values[3]);

    for (int j = 0; j < 3; ++j) {
        if (values[3]<values[j]) {
            printf("%d ",values[3]);
            values[3]=2147483647;
        }
        printf("%d ",values[j]);
    }
}
