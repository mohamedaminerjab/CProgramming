#include <stdio.h>
#include <stdlib.h>

#define EXERCICE_4

int main()
{

    #ifdef EXERCICE_7

    int jour, mois, annee;

    printf(" Donnez le jour : ");
    scanf(" %d",&jour);
    printf(" Donnez le mois : ");
    scanf(" %d",&mois);
    printf(" Donnez l'annee : ");
    scanf(" %d",&annee);


    // Une année est dite bissextile si:
    // elle est divisible par 4 et non divisible par 100, ou si ellee st divisible par 400.

    int annee_bissextile;
    annee_bissextile = (annee%4==0 && annee%100!=0) || (annee%400) ==0;

    /*
    if(annee_bissextile)
        printf("L'annee %d est bissextile",annee);
    else
        printf("L'annee %d n'est pas bissextile",annee);

    */

    // 12 Fevrier 2000
    // il reste 17 jours avant la fin du mois.

    int nb_jours_restants;

    switch (mois){

        case 1  :   printf("%d Janvier %d\n",jour,annee);
                    nb_jours_restants = 31-jour;
                    break;

        case 2  :   printf("%d Fevrier %d\n",jour,annee);

                    if(annee_bissextile)
                        nb_jours_restants = 29-jour;
                    else
                        nb_jours_restants = 28-jour;

                    break;
        case 3  :   printf("%d Mars %d\n",jour,annee);
                    nb_jours_restants = 31-jour;
                    break;

        case 4  :   printf("%d Avril %d\n",jour,annee);
                    nb_jours_restants = 30-jour;
                    break;

        case 5  :   printf("%d Mai %d\n",jour,annee);
                    nb_jours_restants = 31-jour;
                    break;

        case 6  :   printf("%d Juin %d\n",jour,annee);
                    nb_jours_restants = 30-jour;
                    break;

        case 7  :   printf("%d Juillet %d\n",jour,annee);
                    nb_jours_restants = 31-jour;
                    break;

        case 8  :   printf("%d Aout %d\n",jour,annee);
                    nb_jours_restants = 31-jour;
                    break;

        case 9  :   printf("%d Septembre %d\n",jour,annee);
                    nb_jours_restants = 30-jour;
                    break;

        case 10  :   printf("%d Octobre %d\n",jour,annee);
                    nb_jours_restants = 31-jour;
                    break;

        case 11  :   printf("%d Nomvembre %d\n",jour,annee);
                    nb_jours_restants = 30-jour;
                    break;

        case 12  :   printf("%d Decembre %d\n",jour,annee);
                    nb_jours_restants = 31-jour;
                    break;

        default  :  printf("Le mois saisi est Invalide");
                    break;

    }

    printf("il reste %d jours avant la fin du mois.\n",nb_jours_restants);
    #endif // EXERCICE_7

    #ifdef EXERCICE_6
    //Structure conditionnelle switch
    int A, B;
    char operande; // l’opérande (‘+’, ‘*’, ‘-‘, ‘/’, ‘%’).
    printf("Donnez la valeur de A : ");
    scanf("%d",&A);
    printf("Donnez l'operande '+', '*', '-', '/', '%' : ");
    scanf(" %c",&operande);
    printf("Donnez la valeur de B : ");
    scanf("%d",&B);

    switch (operande){
        case '+':   printf ("%d + %d = %d", A,B,A+B);
                    break;
        case '-':   printf ("%d - %d = %d", A,B,A-B);
                    break;
        case '*':   printf ("%d * %d = %d", A,B,A*B);
                    break;
        case '/':   if(B!=0)
                        printf ("%d + %d = %d", A,B,A/B);
                    else
                        printf("La division par 0 est impossible\n");

                    break;
        case '%':   printf ("%d + %d = %d", A,B,A%B);
                    break;
        default :   printf("L'operande est invalide");

    }

    #endif // EXERCICE_6



    #ifdef EXERCICE_5
    /*
    Exercice 5

    Écrire un programme qui saisit un entier entre 100 et 999 puis faire:
    - le carré de la somme de ses entiers si la somme est paire
    - la racine carrée de la somme si la somme est impaire.

    Exemple:
    123 --> 1+2+3 = 6 paire --> on fait le carré : 6² = 36
    333 --> 3+3+3 = 9 impaire --> on fait la racine carrée : racine de 9 = 3

    */
    #include "math.h" // pour inclure les fonctions mathematiques comme sqrt:

    int A;
    printf("Donnez la valeur de A entre 100 et 999 : ");
    scanf("%d",&A);

    if(A>=100 && A<=999){

        int somme;
        int unites, dizaines, centaines;

        unites = A%10;
        dizaines = (A%100)/10;
        centaines = A/100;

        somme = centaines + dizaines + unites;

        if(somme % 2 ==0 )// somme est paire
        {
            printf("Le carre de %d est %d", somme, somme*somme);
        }else{
            printf("Le racine carre de %d est %.3f", somme, sqrt(somme));
        }
    }
    else {
        printf("La valeur saisie n'est pas comprise entre 100 et 999 \n");
    }
    #endif // EXERCICE_5


    #ifdef EXERCICE_4

    /*
    Exercice 4 : Structure conditionnelle if imbriqué
    Écrire un programme qui calcule le min de trois entiers saisis au clavier.

    */

    int A, B, C, minABC;

    printf("Donnez la valeur de A : ");
    scanf("%d",&A);
    printf("Donnez la valeur de B : ");
    scanf("%d",&B);
    printf("Donnez la valeur de C : ");
    scanf("%d",&C);

    // 1ere méthode: if imbriqué

    if(A<B){
        if(A<C){
            minABC =A;
        }else{
            minABC =C;
        }
    }
    else{
        if(B<C){
            minABC =B;
        }else{
            minABC =C;
        }
    }
        printf(" Le Min de %d, %d, et %d est %d \n", A, B, C, minABC);

    // 2eme méthode : short hand
    // https://www.w3schools.com/c/c_conditions_short_hand.php

        minABC = A < B ? ( A < C ? A : C):( B < C ? B : C);

        printf(" Le Min de %d, %d, et %d est %d \n", A, B, C, minABC);

    #endif // EXERCICE_4


    return 0;
}
