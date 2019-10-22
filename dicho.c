//
// Created by Nathan Baelen on 16/10/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SECRET 10
#define MAX_TENTATIVES 12

int nombreSecret; // le nombre à deviner
int nombreJoueur; // le nombre proposé par le joueur à chaque tour
int borneSup,borneInf; // les 2 bornes délimitant à chaque tour l'intervalle de recherche du joueur
int fini,gagne; // booleen : 0 pour false, 1 pour true. le joueur a-t-il fini, a-t-il gagné?


void dicho() {
    int i;
    /* tirage aleatoire d'un entier entre 0 et MAX_SECRET */
    srand(time(NULL));
    nombreSecret=rand()%MAX_SECRET;

    /* initilisation des variables d'etat */
    fini=0;gagne=0;i=0;
    borneSup=MAX_SECRET;borneInf=0;

    /* boucle interactive de saisie */
    while (!fini) {
        printf("Entrer un nombre entre %d et %d\n",borneInf,borneSup);
        printf("Choisissez une valeur : ");
        scanf("%d",&nombreJoueur);

        /* comparaison */
        if (nombreSecret<nombreJoueur) {
            i=i+1;
            borneSup=nombreJoueur;
            printf("TROP GRAND !\n");
        }
        else if (nombreSecret>nombreJoueur) {
            i=i+1;
            borneInf=nombreJoueur;
            printf("TROP PETIT !\n");
        } else if (nombreSecret==nombreJoueur) {
            gagne=1;
            fini=1;
            printf("GAGNE ! \n");
        }
        if (i==MAX_TENTATIVES) {
            fini=1;gagne=0;
        }
    }
    if (!gagne) {
        printf("Desole, le nombre a deviner etait:%d\n",nombreSecret);
    }
}