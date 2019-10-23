//
// Created by Nathan Baelen on 23/10/2019.
//
#include "stdio.h"

#define MAX 10
int ligne[MAX], ligneSup[MAX];
int i, j;

void pascal() {
    for (i = 0; i < MAX; ++i) ligneSup[i] = 0;
    ligneSup[0] = 1;

    for (int k = 0; k < 7; ++k) {
        for (i = 0; i < MAX; i++) ligne[i] = ligneSup[i] + ligneSup[i - 1];
        printf("\n");

        for (i = 0; i < MAX; i++) {
            if (ligneSup[i] != 0) printf("%d ", ligneSup[i]);
            ligneSup[i] = ligne[i];
        }
    }


}