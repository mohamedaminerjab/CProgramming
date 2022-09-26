#include <stdio.h>
#include <stdlib.h>

#define EXERCICE_7

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



    #ifdef EXERCICE_2


    #endif // EXERCICE_2


    #ifdef EXERCICE_1


    #endif // EXERCICE_1


    return 0;
}
