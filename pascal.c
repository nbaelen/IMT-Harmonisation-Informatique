//
// Created by Nathan Baelen on 23/10/2019.
//
#include "stdio.h"

#define MAX 10
int ligne[MAX];
int i;

void pascal() {
    for (i = 0; i < MAX; ++i) ligne[i] = 0;
    ligne[0] = 1;

    for (int k = 0; k < 7; ++k) {
        for (i = 0; i < MAX; ++i) if (ligne[i] != 0) printf("%d ", ligne[i]);
        ligne[0] = 1;
        for (i = MAX; i > 0; i--) ligne[i] += ligne[i - 1];
        printf("\n");
    }
}