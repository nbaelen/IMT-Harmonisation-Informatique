//
// Created by Nathan Baelen on 26/10/2019.
//

#include "stdio.h"

void magique() {
    const int MAX = 7; // MAX doit etre impair
    typedef int Colonne[MAX];
    typedef Colonne Carre[MAX];
    Carre carre;

    //Initialisation du carré
    for (int j = 0; j < MAX; ++j) {
        for (int k = 0; k < MAX; ++k) {
            carre[j][k] = 0;
        }
        printf("\n");
    }

    //printf("%d",(MAX/2)+1);
    carre[0][MAX / 2] = 1;
    int currentLine = 0;
    int currentColumn = MAX / 2;
    int nextLine = currentLine;
    int nextColumn = currentColumn;

    for (int i = 2; i <= (MAX * MAX); ++i) {
        nextLine--;
        nextColumn++;
        if (nextLine < 0) nextLine = MAX - 1;
        if (nextColumn > 6) nextColumn = 0;

        if (carre[nextLine][nextColumn] != 0) {
            nextLine = currentLine + 1;
            nextColumn = currentColumn;
            if (nextLine < 0) nextLine = MAX - 1;
        }

        currentColumn = nextColumn;
        currentLine = nextLine;
        carre[nextLine][nextColumn] = i;
        printf("carre[%d][%d]=%d\n", nextLine, nextColumn, i);
    }

    //Affichage du carré
    int somme;
    for (int j = 0; j < MAX; ++j) {
        somme = 0;
        for (int k = 0; k < MAX; ++k) {
            somme += carre[j][k];
            printf("%d ", carre[j][k]);
        }
        printf("   somme = %d\n", somme);
    }
}