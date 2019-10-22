//
// Created by Nathan Baelen on 18/10/2019.
//

#include "stdio.h"
#include "math.h"

/*
    int a = saisieEquation('a');
    int b = saisieEquation('b');
    int c = saisieEquation('c');

    affichageEquation(a,b,c);

    return 0;
 */

int saisieEquation(char pLetter) {
    int rInt;
    printf("Saisir %c : ",pLetter);
    scanf("%d",&rInt);
    return rInt;
}

void calculEquation(int a, int b, int c, int *code, double *x1, double *x2) {
    if (a == 0) {
        if (b == 0) {
            *code=1;
            if (c == 0) {
                *code=3;
            } else {
                *code=0;
            }
        }
    } else {
        double delta = pow(b, 2) - (4 * a * c);
        printf("Le discrimant vaut : %f\n", delta);

        if (delta > 0) {
            *code = 2;
            *x1 = (-b - sqrt(delta)) / (2 * a);
            *x2 = (-b + sqrt(delta)) / (2 * a);
        } else if (delta == 0) {
            double *x1 = -b / 2 * a;
            *code = 1;
        } else {
            *code = 0;
        }
    }
}

void affichageEquation(int pA, int pB, int pC) {
    double x1;
    double x2;
    int code;

    calculEquation(pA, pB, pC, &code, &x1, &x2);

    switch (code) {
        case 0: printf("Il n'y a pas de solution");
                break;
        case 1: printf("Il y a 1 solution\n");
                printf("La racine est %f", x1);
                break;
        case 2: printf("Il y a 2 solutions \n");
                printf("Les racines sont %f et %f", x1, x2);
                break;
        case 3: printf("Il y a une infinité de solutions");
                break;
    }
}


