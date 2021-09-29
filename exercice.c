//
// Created by nicol on 29/09/2021.
//
#include "exercice.h"
#include <stdio.h>
#include "fonctions.h"

void exercice1()
{
    int a = saisissezEntier();
    int b = saisissezEntier();
    printf(getMax(a, b));
    return;
}
void exercice3()
{
    //int longueur = saisirLongueur();
    //int largeur = saisirLargeur();
    //printf(calculPerimetre(longueur, largeur), calculAire(longueur, largeur));
    //return;
    // consigne mal lues, je me suis embeté pour rien..

    int longueur = saisissezEntier();
    int largeur = saisissezEntier();
    printf(calculPerimetre(longueur, largeur), calculAire(longueur, largeur));
    return;
}

void exercice4()
{
    int i = saisissezEntier();
    int j= saisissezEntier();
    printf(multiple(i, j ));
    return;
}

void exercice5()
{
    float note1= saisissezEntier();
    float note2= saisissezEntier();
    float note3= saisissezEntier();
    return moyenne(note1, note2, note3);
}