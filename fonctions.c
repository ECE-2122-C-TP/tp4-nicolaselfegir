//
// Created by nicol on 29/09/2021.
//
#include "fonctions.h"
#include <stdio.h>

int getMax(int a,int b)
{
    if (a<b)
    {
        printf("le plus grand est %d.\n", b );
    }
    else
    {
        printf("le plus grand est %d.\n", a);
    }
}

int  saisissezEntier()
{
    int entier = 0;
    printf("saisissez entier : \n");
    scanf ("%d", &entier);
    return entier;
}

int saisirLongueur()
{
    int longueur=0;
    printf("saisissez longueur : \n");
    scanf("%d", &longueur);
    return longueur;
}

int saisirLargeur()
{
    int largeur=0;
    printf("saisissez largeur : \n");
    scanf("%d", &largeur);
    return largeur;
}

int calculAire(int longueur, int largeur)
{
    int aire=0;
    //aire=longueur*largeur;
    //printf("l'aire vaut :  %d", &aire); Ne fonctionne pas mais je ne comprends pas pourquoi..
    printf("L'aire vaut :  %d", longueur*largeur);
}

int calculPerimetre(int longueur, int largeur)
{
    //int perimetre=0;
    //perimetre = 2*(longueur + largeur);
    printf(" et le perimetre vaut : %d", 2*(longueur + largeur));
}

int multiple(int i, int j)
{
    if (i%j ==0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}

float moyenne(float note1, float note2,float note3)
{
    if (note1>=0 && note1<=20 && note2>=0 && note2<=20 && note3>=0 && note3<=20)
    {
        printf("la moyenne vaut : %f", (note1+ note2+ note3)/3);
    }
    else
    {
        printf("-1");
    }
}