//
// Created by Nathan Baelen on 22/10/2019.
//

#include "stdio.h"

int saisiePremiers() {
    int n;
    printf("Saisir n : ");
    scanf("%d",&n);
    return n;
}

int calculPremiers(int n) {
    int d = 2;
    while ((d*d) < n) {
        if (n%d == 0) {
            printf("d : %d\n",d);
        }
        d++;
    }
}