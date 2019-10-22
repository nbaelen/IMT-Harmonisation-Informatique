//
// Created by Nathan Baelen on 22/10/2019.
//

#include "stdio.h"

void parfait(int number) {
    int somme = 0;
    for (int i = 1; i < number; ++i)
        if ((number % i) == 0) somme += i;
    if (somme == number)
        printf("Le nombre %d est un nombre parfait", number);
    else
        printf("Le nombre %d n'est pas un nombre parfait", number);
}



