#include <stdi#o.h>
#include <stdlib.h>
#include <math.h>

double rayon, hauteur, circonf,surfaceCercle, volumeCylindre;

int cercle() {
    const double pi = 4*atan(1);
    /* invite et saisie */
    printf("entrer un rayon (valeur réelle) : ");
    scanf("%lg",&rayon);
    printf("entrer un hauteur (valeur réelle) : ");
    scanf("%lg",&hauteur);
    /* affichage de la circonférence */
    circonf=2*pi*rayon;
    surfaceCercle=pi*pow(rayon,2);
    volumeCylindre=surfaceCercle*hauteur;
    printf("la circonference vaut %lg\n",circonf);
    printf("la surface vaut %lg\n",surfaceCercle);
    printf("le volume du cylindre vaut %lg\n",volumeCylindre);
    return 0;
}