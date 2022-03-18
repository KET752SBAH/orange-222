#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int mont,num,forfait,cd,a,b,c,d,e,f;
    char orange[6], o[6] = "*222#";


    srand(time(NULL));
    forfait=(rand()%(1000-30 +1))+30; // Forfait aléatoire
    mont=(rand()%(100000-980 +1))+980; // Montant aléatoire

    puts("\n\n");

    system("color a");
    puts("**********  **********  **********  *        *  *********  *********            *     ");
    puts("*        *  *        *  *        *  *        *  *       *  *                    *       *  ");
    puts("*           *        *  *        *  *        *  *       *  *                    *       *  ");
    puts("*     ****  *********   *        *  *        *  *********  *********    ***     *********");
    puts("*        *  *        *  *        *  *        *  *          *                            *  ");
    puts("**********  *         * **********  **********  *          *********                    *    ");


    puts("\n\n*******************__BIENVENUE AU PROJET *222#__*******************");
    puts("********************---_LES MEMBRES DU GROUPE_---********************\n");
    puts("1.SOULEYMANE BAH ");
    puts("2.KADIATOU BARRY  ");
    puts("3.ALPHA OUMAR DIALLO ");
    puts("4.AMADOU SADJO DIALLO **");
    puts("5.IBRAHIMA TANOU BAH **");

    puts("***************************** \n");

    system("pause \n");
    system("cls");

    printf("Entrez le code achat de pass OrangeGN :");
    scanf("%s", orange);
    // On verifie si le code entré est vrai 222
    if(strcmp(orange, o) == 0)
    {
        // On affiche le menu
        X: // On utilise le syntaxe goto pour renvoyé le menu si la valeur entrée n'est pas dans le menu
            {
                system("cls");
                puts("*********************************************************");
                printf("Bienvenue au portail 222: \n\n");

                printf("1.Pass Jour \n");
                printf("2.Pass Semaine \n");
                printf("3.Pass Mois \n");
                printf("4.Pass TV dedies \n");
                printf("5.Solde data \n");
                printf("6.SOS Internet \n");
                printf("7.Achat pour un autre et Box \n");
                printf("8.Transfert Internet \n");
                printf("9.Forfait Fa Atongo \n");
                puts("*********************************************************");

                scanf("%d", &a);

                if(a>=1 && a<=9)
                {
                    switch(a)
                    {
                    case 1: // Pass Jour
                        A: // Si l'utilisateur tape 1 on affiche le menu de A
                            {
                                system("cls");
                                puts("*********************************************************");
                                printf("Choisir un Pass : \n");
                                printf("1.Pass Decouverte 30Mo \n");
                                printf("2.Pass My Friends \n");
                                printf("3.Pass Jour+ \n");
                                printf("4.Pass Jour Extra \n");
                                printf("5.Pass Nuit \n");
                                printf("6.Portail Education \n");
                                printf("9.Acceuil \n");
                                puts("*********************************************************");

                                scanf("%d", &b);

                                if(b==9)
                                {
                                    goto X;
                                }
                                else if(b>=1 && b<=6)
                                {
                                    switch(b)
                                    {
                                    case 1: // Pass Decouverte 30Mo
                                        A1: // si le choix est 1 On affiche le menu A1
                                            {
                                                system("cls");
                                                puts("*********************************************************");
                                                printf("Confirmez-vous l'achat du pass découverte de 30Mo ? \n");
                                                printf("Prix: 980 GNF \n\n");

                                                printf("1.Oui \n");
                                                printf("2.Non \n");
                                                printf("0.Retour achat de pass \n");
                                                puts("*********************************************************");

                                                scanf("%d", &c);

                                                if(c==0)
                                                {
                                                    goto A;
                                                }
                                                else if(c==1 || c==2)
                                                {
                                                    switch(c)
                                                    {
                                                    case 1: // Choix 1 Oui On vérifi son solde
                                                        if(mont>=980)
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            printf("Felicitation! vous avez souscrit au Pass Decouverte \nlimite a 30 Mo a 980 GNF valable 24h  \n");
                                                            puts("*********************************************************");
                                                            system("pause");
                                                            return 0;
                                                        }
                                                        else
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            printf("Votre compte presente un solde insuffisant.\n");
                                                            printf("Veuillez recharger afin d'acheter un nouveau pass \n\n");
                                                            puts("*********************************************************");
                                                            system("pause");
                                                            return 0;
                                                        }
                                                        break;
                                                    case 2: // Choix 2 Non On annule l'achat de pass 30Mo
                                                        system("cls");
                                                        puts("*********************************************************");
                                                        printf("Achat de pass annulé. \n");
                                                        puts("*********************************************************");
                                                        system("pause");
                                                        return 0;
                                                        break;
                                                    default:
                                                        break;
                                                    }

                                                }
                                                else
                                                    goto A1;
                                            }
                                            break;
                                    case 2: // Pass My Friends B
                                        B:
                                            {
                                                system("cls");
                                                puts("*********************************************************");
                                                printf("Confirmez-vous l'achat du pass My Friends valable 24h ? \n");
                                                printf("Prix 1 950 GNF \n");

                                                printf("1.Oui \n");
                                                printf("2.Non \n");
                                                printf("0.Retour achat de pass \n");
                                                puts("*********************************************************");

                                                scanf("%d", &b);

                                                if(b==0)
                                                {
                                                    goto X;
                                                }
                                                else if(b==1 || b==2)
                                                {
                                                    switch(b)
                                                    {
                                                    case 1: // Choix 1 Oui pour confirmer on verifie si il a la posibilité de faire d'achat
                                                        if(mont>=1950)
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            printf("Feliciation vous avez souscrit au pass My Friends limite\n a 100Mo a 1 950 GNF valable  \n");
                                                            puts("*********************************************************");
                                                            system("pause");
                                                            return 0;
                                                        }
                                                        else
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            printf("Votre compte presente un solde insuffisant.\n");
                                                            printf("Veuillez recharger afin d'acheter un nouveau pass \n");
                                                            puts("*********************************************************");
                                                            system("pause");
                                                            return 0;
                                                        }
                                                        break;
                                                    case 2: // Choix 2 Non achat de pass annulé
                                                        system("cls");
                                                        puts("*********************************************************");
                                                        printf("Achat de pass Annulé \n");
                                                        puts("*********************************************************");
                                                        system("pause");
                                                        return 0;
                                                        break;
                                                    default:
                                                        goto B;
                                                    }
                                                    break;
                                                }
                                            }
                                    case 3: // Pass Jour+ C
                                        C:
                                            {
                                                system("cls");

                                                puts("*********************************************************");
                                                printf("Confirmez-vous l'achat du pass Jour Plus 150Mo valable 24h ? \n");
                                                printf("2950 GNF \n");
                                                printf("1.Oui \n");
                                                printf("2.Non \n");
                                                printf("0.Retour achat de pass \n");
                                                system("pause");
                                                puts("*********************************************************");
                                                scanf("%d", &b);

                                                if(b==0)
                                                {
                                                    goto X;
                                                }
                                                else if(b==1 || b==2)
                                                {
                                                    switch(b)
                                                    {
                                                    case 1: // Choix 1 Oui confirmer l'achat de pass
                                                        if(mont>=2950)
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            printf("Felicitation vous avez souscrit au Pass Jour+ a 2950 GNF\n, vous beneficiez de 150Mo valable 24h ");
                                                            puts("*********************************************************");
                                                            system("pause");
                                                            return 0;
                                                        }
                                                        else
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            printf("Votre compte presente un solde insuffisant. \n");
                                                            printf("Veuillez recharger afin d'acheter un nouveau pass \n");
                                                            puts("*********************************************************");
                                                            system("pause");
                                                            system("pause");
                                                            return 0;
                                                        }
                                                        break;
                                                    case 2: // Choix 2 Non annul l'achat de pass
                                                        system("cls");
                                                        puts("*********************************************************");
                                                        printf("Achat de de pass annule \n");
                                                        puts("*********************************************************");
                                                        system("pause");
                                                        return 0;
                                                        break;
                                                    default:
                                                        break;
                                                    }
                                                    break;
                                                }
                                                else
                                                {
                                                    goto C;
                                                }
                                            }
                                    case 4: // Pass Jour Extra D
                                        D:
                                            {
                                                system("cls");
                                                puts("*********************************************************");
                                                printf("Confirmez-vous l'achat du pass Jour Plus 350Mo valable 24h ? \n");
                                                printf("6 400 GNF \n");
                                                printf("1.Oui \n");
                                                printf("2.Non \n");
                                                printf("0.Retour achat de pass \n");
                                                puts("*********************************************************");

                                                scanf("%d", &b);

                                                if(b==0)
                                                {
                                                    goto X;
                                                }
                                                else if(b==1 || b==2)
                                                {
                                                    switch(b)
                                                    {
                                                    case 1: // Choix 1 Oui confirmer l'achat de pass
                                                        if(mont>=6400)
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            printf("Felicitation vous avez souscrit au Pass Jour Extra a 6400 GNF\n, vous beneficiez de 350Mo valable 24h ");
                                                            puts("*********************************************************");
                                                            return 0;
                                                        }
                                                        else
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            printf("Votre compte presente un solde insuffisant. \n");
                                                            printf("Veuillez recharger afin d'acheter un nouveau pass \n");
                                                            puts("*********************************************************");
                                                            system("pause");
                                                            return 0;
                                                        }
                                                        break;
                                                    case 2: // Choix 2 Non annul l'achat de pass
                                                        system("cls");
                                                        puts("*********************************************************");
                                                        printf("Achat de de pass annule \n");
                                                        puts("*********************************************************");
                                                        system("pause");
                                                        return 0;
                                                        break;
                                                    default:
                                                        break;
                                                    }

                                                }
                                                else
                                                {
                                                    goto D;
                                                }
                                            }
                                        break;
                                    case 5: // Pass Nuit E
                                       E:
                                           {
                                               system("cls");
                                               puts("*********************************************************");
                                               printf("1.Pass Nuit_400Mo \n");
                                               printf("2.Pass Nuit_1Go \n");
                                               puts("*********************************************************");
                                               scanf("%d", &b);

                                               if(b==1 || b==2)
                                               {
                                                   switch(b)
                                                   {
                                                   case 1: // Pass Nuit_400Mo
                                                        E1:
                                                            {
                                                                system("cls");
                                                                puts("*********************************************************");
                                                                printf("Confirmez-vous l'achat du Pass Nuit_400Mo Valable entre 0h et 07h ?");
                                                                printf("Prix: 2500 GNF");

                                                                printf("1.Oui \n");
                                                                printf("2.Non \n");
                                                                printf("0.Retour achat de pass \n");

                                                                puts("*********************************************************");
                                                                scanf("%d", &c);

                                                                if(c==0)
                                                                {
                                                                    goto E1;
                                                                }
                                                                else if(c==1 || c==2)
                                                                {
                                                                    switch(c)
                                                                    {
                                                                    case 1: // Oui
                                                                        if(mont>=2500)
                                                                        {
                                                                            system("cls");
                                                                            puts("*********************************************************");
                                                                            printf("Felicitation vous avez souscrit avec succes au Pass nuit\n valable 24h utilisable de 0h a 7h a 2500F  \n");
                                                                            puts("********************************************************");
                                                                            system("pause");
                                                                            return 0;
                                                                        }
                                                                        else
                                                                        {
                                                                            system("cls");
                                                                            puts("*********************************************************");
                                                                            printf("Votre compte presente un solde insuffisant. \n");
                                                                            printf("Veuillez recharger afin d'acheter un nouveau pass \n");
                                                                            puts("*********************************************************");
                                                                            system("pause");
                                                                            return 0;
                                                                        }
                                                                        break;
                                                                    case 2: // Non
                                                                        system("cls");
                                                                        puts("*********************************************************");
                                                                        printf("Achat de pass annule \n");
                                                                        puts("*********************************************************");
                                                                        system("pause");
                                                                        return 0;
                                                                        break;
                                                                    default:
                                                                        goto E1;
                                                                        break;
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    goto E;
                                                                }
                                                            }
                                                            break;
                                                   case 2: //Pass Nuit_1Go
                                                       E2:
                                                           {
                                                               system("cls");
                                                               puts("*********************************************************");
                                                               printf("Confirmez-vous l'achat du Pass Nuit_1Go Valable entre 0h et 07h ?\n");
                                                               printf("1.Oui \n");
                                                               printf("2.Non \n");
                                                               printf("0.Retour achat de pass \n");
                                                               puts("*********************************************************");
                                                               scanf("%d",&c);

                                                               if(c==0)
                                                               {
                                                                   goto E;
                                                               }
                                                               else if(c==1 || c==2)
                                                               {
                                                                    switch(c)
                                                                    {
                                                                    case 1:
                                                                        if(mont>=6000)
                                                                        {
                                                                            system("cls");
                                                                            puts("*********************************************************");
                                                                            printf("Felicitation vous avez souscrit au pass nuit Extra \nvalable 24H utilisable de 0H a 7H a 6000 GNF n \n");
                                                                            puts("*********************************************************");
                                                                            return 0;
                                                                        }
                                                                        else
                                                                        {
                                                                            system("cls");
                                                                            puts("*********************************************************");
                                                                            printf("Votre comptre presente un solde insuffisant. \n");
                                                                            printf("Veuillez recharger afin d'acheter un nouveau pass \n");
                                                                            puts("*********************************************************");
                                                                            system("pause");
                                                                            return 0;
                                                                        }
                                                                        break;
                                                                    case 2:
                                                                        system("cls");
                                                                        puts("*********************************************************");
                                                                        printf("Achat de pass Annule \n");
                                                                        puts("*********************************************************");
                                                                        return 0;
                                                                        break;
                                                                    default:
                                                                        break;
                                                                    }
                                                               }
                                                               else
                                                               {
                                                                   goto E2;
                                                               }
                                                           }
                                                        break;
                                                    default:
                                                        break;
                                                   }
                                               }
                                           }
                                    case 6: // Forfait EDUCATION 100Mo F
                                        F:
                                            {
                                                system("cls");
                                                puts("*********************************************************");
                                                printf("1.Forfait 100Mo \n");
                                                puts("*********************************************************");
                                                scanf("%d",&b);

                                                if(b==1)
                                                {
                                                    F1:
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            printf("Confirmez-vous l'achat du pass 100Mo ? \n");
                                                            printf("Prix: 1 500 GNF \n");
                                                            printf("Validé: 24h \n");

                                                            printf("1.Oui \n");
                                                            printf("2.Non \n");
                                                            printf("0.Précédent \n");
                                                            puts("*********************************************************");

                                                            scanf("%d",&c);

                                                            if(c==0)
                                                            {
                                                                goto F;
                                                            }
                                                            else if(c==1 || c==2)
                                                            {
                                                                switch(c)
                                                                {
                                                                case 1:
                                                                    if(mont >=1500)
                                                                    {
                                                                        system("cls");
                                                                        puts("*********************************************************");
                                                                        printf("Felicitation vous avez souscrit au forfait Education \n 100Mo valable 2h a 1500 GNF \n");
                                                                        puts("*********************************************************");
                                                                        system("pause");
                                                                        return 0;
                                                                    }
                                                                    else
                                                                    {
                                                                        system("cls");
                                                                        puts("*********************************************************");
                                                                        printf("Votre compte presente un solde insuffisant. \n");
                                                                        printf("Veuillez recharger afin d'acheter un nouveau pass. \n");
                                                                        puts("*********************************************************");
                                                                        system("pause");
                                                                        return 0;
                                                                    }
                                                                    break;
                                                                case 2:
                                                                    system("cls");
                                                                    puts("*********************************************************");
                                                                    puts("Achat de pass Annule");
                                                                    puts("*********************************************************");
                                                                    break;
                                                                default:
                                                                    break;
                                                                }
                                                            }
                                                            else
                                                            {
                                                                goto F1;
                                                            }
                                                        }
                                                }
                                                else
                                                {
                                                    goto F;
                                                }
                                            }
                                        break;
                                    default:
                                        goto A;
                                    }
                                }
                                else
                                    goto A;
                            }
                    case 2: // Pass Semaine
                        AA:
                            {
                                system("cls");
                                puts("*********************************************************");
                                puts("Choisir un Pass :");
                                puts("1.Pass Smart 800Mo");
                                puts("2.Pass Smart 1,8Go");
                                puts("9.Acceuil");
                                puts("*********************************************************");

                                scanf("%d",&a);

                                if(a==9)
                                {
                                    goto X;
                                }
                                else if(a==1 || a==2)
                                {
                                    switch(a)
                                    {
                                    case 1: // Pass Smart 800 Mo
                                        AA1:
                                            {
                                                system("cls");
                                                puts("*********************************************************");
                                                puts("Confirmez-vous l'achat du pass Smart 800 Mo valable 7 Jours ?");
                                                puts("Prix: 14 000 GNF");
                                                puts("1.Oui");
                                                puts("2.Non");
                                                puts("0.Retour achat de pass");
                                                puts("*********************************************************");

                                                scanf("%d",&b);

                                                if(b==0)
                                                {
                                                    goto AA;
                                                }
                                                else if(b==1 || b==2)
                                                {
                                                    switch(b)
                                                    {
                                                    case 1:
                                                        if(mont>=14000)
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            puts("Felicitation vous avez souscrit au pass Smart 800Mo valable\n 7 Jours a 14 000 GNF\n");
                                                            puts("*********************************************************");
                                                            system("pause");
                                                            return 0;
                                                        }
                                                        else
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            printf("Votre compte presente un solde insuffisant. \n");
                                                            printf("Veuillez recharger afin d'acheter un nouveau pass. \n");
                                                            puts("*********************************************************");
                                                            return 0;
                                                        }
                                                        break;
                                                    case 2:
                                                        system("cls");
                                                        puts("*********************************************************");
                                                        puts("Achat de pass annule");
                                                        puts("*********************************************************");
                                                        system("pause");
                                                        return 0;
                                                        break;
                                                    default:
                                                        break;
                                                    }
                                                }
                                                else
                                                {
                                                    goto AA1;
                                                }
                                            }
                                        break;
                                    case 2: // Pass Smart Plus_1,8Go
                                        AA2:
                                            {
                                                system("cls");
                                                puts("*********************************************************");
                                                puts("Confirmez-vous l'achat du pass Smart Plus_1,8Go Valable 7 Jours ");
                                                puts("Prix: 31 000 GNF");
                                                puts("1.Oui ");
                                                puts("2.Non");
                                                puts("0.Retour achat de pass");
                                                puts("*********************************************************");

                                                scanf("%d",&b);

                                                if(b==0)
                                                {
                                                    goto AA;
                                                }
                                                else if(b==1 || b==2)
                                                {
                                                    switch(b)
                                                    {
                                                    case 1:
                                                        if(mont>=31000)
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            puts("Felicitation vous avez souscrit au pass Smart Plus 1.8Go \nvalable 7 Jours a 31 000 GNF");
                                                            puts("*********************************************************");
                                                            system("pause");
                                                            return 0;
                                                        }
                                                        else
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            printf("Votre compte presente un solde insuffisant. \n");
                                                            printf("Veuillez recharger afin d'acheter un nouveau pass. \n");
                                                            puts("*********************************************************");
                                                            system("pause");
                                                            return 0;
                                                        }
                                                        break;
                                                    case 2:
                                                        system("cls");
                                                        puts("*********************************************************");
                                                        puts("Achat de pass annule ");
                                                        puts("*********************************************************");
                                                        break;
                                                    default:
                                                        break;
                                                    }
                                                }
                                                else
                                                {
                                                    goto AA2;
                                                }
                                            }
                                        break;
                                    default :
                                        break;
                                    }
                                }
                                else
                                {
                                    goto AA;
                                }
                            }
                        break;
                    case 3: // Pass Mois
                        AB:
                            {
                                system("cls");
                                puts("*********************************************************");
                                puts("Choisir un Pass :");
                                puts("1.Pass Light_3 Go");
                                puts("2.Pass Plus_6,5 Go");
                                puts("3.Pass Max_15 Go");
                                puts("9.Accueil");
                                puts("*********************************************************");

                                scanf("%d",&a);

                                if(a==9)
                                {
                                    goto X;
                                }
                                else if(a>=1 && a<=3)
                                {
                                    switch(a)
                                    {
                                    case 1: // pASS Light de 3Go
                                        AB1:
                                            {
                                                system("cls");
                                                puts("*********************************************************");
                                                puts("Confirmez-vous l'achat du pass Light de 3Go valable 30 jours ?");
                                                puts("Prix: 50 000 GNF");
                                                puts("1.Oui");
                                                puts("2.Non");
                                                puts("0.Retour achat de pass");
                                                puts("*********************************************************");

                                                scanf("%d", &b);

                                                if(b==0)
                                                {
                                                    goto AB;
                                                }
                                                else if(b==1 || b==2)
                                                {
                                                    switch(b)
                                                    {
                                                    case 1:
                                                        if(mont >=50000)
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            puts("Felicitation vous avez souscrit au pass Light de 3Go \nvalable 30 jours a 50 000 GNF");
                                                            puts("*********************************************************");
                                                            system("pause");
                                                            return 0;
                                                        }
                                                        else
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            printf("Votre compte presente un solde insuffisant. \n");
                                                            printf("Veuillez recharger afin d'acheter un nouveau pass. \n");
                                                            puts("*********************************************************");
                                                            system("pause");
                                                            return 0;
                                                        }
                                                        break;
                                                    case 2:
                                                        system("cls");
                                                        puts("*********************************************************");
                                                        puts("Achat de pass Annule ");
                                                        puts("*********************************************************");
                                                        system("pause");
                                                        return 0;
                                                        break;
                                                    default:
                                                        break;
                                                    }
                                                }
                                                else
                                                {
                                                    goto AB1;
                                                }
                                            }
                                        break;
                                    case 2: // Pass Plus_6,5 Go
                                        AB2:
                                            {
                                                system("cls");
                                                puts("*********************************************************");
                                                puts("Confirmez-vous l'achat du pass Plus 6,5 Go valable 30 Jour?");
                                                puts("Prix: 105 000 GNF ");
                                                puts("1.Oui");
                                                puts("2.Non");
                                                puts("0.Retour achat de pass");
                                                puts("*********************************************************");

                                                scanf("%d",&b);

                                                if(b==0)
                                                {
                                                    goto AB;
                                                }
                                                else if(b==1 || b==2)
                                                {
                                                    switch(b)
                                                    {
                                                    case 1:
                                                        if(mont>=105000)
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            puts("Felicitation vous avez souscrit au pass Plus 6,5Go \na 105 000GNF valable 30Jours ");
                                                            puts("*********************************************************");
                                                            system("pause");
                                                            return 0;
                                                        }
                                                        else
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            printf("Votre compte presente un solde insuffisant. \n");
                                                            printf("Veuillez recharger afin d'acheter un nouveau pass. \n");
                                                            puts("*********************************************************");
                                                            system("pause");
                                                            return 0;
                                                        }
                                                        break;
                                                    case 2:
                                                        system("cls");
                                                        puts("*********************************************************");
                                                        puts("Achat de pass annule ");
                                                        puts("*********************************************************");
                                                        system("pause");
                                                        return 0;
                                                        break;
                                                    default:
                                                        break;
                                                    }
                                                }
                                                else
                                                {
                                                    goto AB2;
                                                }
                                            }
                                        break;
                                    case 3: // Pass Max_15Go
                                        AB3:
                                            {
                                                system("cls");
                                                puts("*********************************************************");
                                                puts("Confirmez-vous l'achat du pass Mois_15Go");
                                                puts("Prix: 185 000 GNF");
                                                puts("1.Oui");
                                                puts("2.Non");
                                                puts("0.Retour achat de pass");
                                                puts("*********************************************************");

                                                scanf("%d",&b);

                                                if(b==0)
                                                {
                                                    goto AB;
                                                }
                                                else if(b==1 || b==2)
                                                {
                                                    switch(b)
                                                    {
                                                    case 1:
                                                        if(mont>=185000)
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            puts("Felicitation vous avez souscrit un pass Mois 15Go \nvalable 30Jours a 185 000GNF");
                                                            puts("*********************************************************");
                                                            system("pause");
                                                            return 0;
                                                        }
                                                        else
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            printf("Votre compte presente un solde insuffisant. \n");
                                                            printf("Veuillez recharger afin d'acheter un nouveau pass. \n");
                                                            puts("*********************************************************");
                                                            system("pause");
                                                            return 0;
                                                        }
                                                        break;
                                                    case 2:
                                                        system("cls");
                                                        puts("*********************************************************");
                                                        puts("Achat de pass annule");
                                                        puts("*********************************************************");
                                                        system("pause");
                                                        return 0;
                                                        break;
                                                    default:
                                                        break;
                                                    }
                                                }
                                                else
                                                {
                                                    goto AB3;
                                                }
                                            }
                                        break;
                                    default:
                                        break;
                                    }
                                }
                                else
                                {
                                    goto AB;
                                }
                            }
                        break;
                    case 4: // Pass TV dedies
                        AC:
                            {
                                system("cls");
                                puts("*********************************************************");
                                puts("Bienvenu sur le Menu Mobile TV");
                                puts("0.Retour achat pass");
                                puts("2.Mobile TV");
                                puts("*********************************************************");
                                scanf("%d",&b);

                                if(b==0)
                                {
                                    goto X;
                                }
                                else if(b==2)
                                {
                                    AC1:
                                        {
                                            system("cls");
                                            puts("*********************************************************");
                                            puts("1.Forfait 40mn à 1500 GNF");
                                            puts("2.Forfait 1h à 2000 GNF");
                                            puts("3.Forfait 2h10 à 3900 GNF");
                                            puts("*********************************************************");

                                            scanf("%d",&c);

                                            if(c>=1 && c<=3)
                                            {
                                                switch(c)
                                                {
                                                case 1: // Forfait 40min à 1500 GNF
                                                    AC11:
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            puts("Confirmez-vous l'achat du pass 40mn ");
                                                            puts("Prix: 1500 GNF");
                                                            puts("Validite: 24H");
                                                            puts("1.Oui");
                                                            puts("2.Non");
                                                            puts("*********************************************************");

                                                            scanf("%d",&d);

                                                            if(d==1 || d==2)
                                                            {
                                                                switch(d)
                                                                {
                                                                case 1: // Oui Pour l'achat
                                                                    if(mont>=1500)
                                                                    {
                                                                        system("cls");
                                                                        puts("*********************************************************");
                                                                        puts("Felicitation vous avez souscrit au forfait \n40min à 1500 GNF valable 24h");
                                                                        puts("*********************************************************");
                                                                        system("pause");
                                                                        return 0;
                                                                    }
                                                                    else
                                                                    {
                                                                        system("cls");
                                                                        puts("*********************************************************");
                                                                        printf("Votre compte presente un solde insuffisant. \n");
                                                                        printf("Veuillez recharger afin d'acheter un nouveau pass. \n");
                                                                        puts("*********************************************************");
                                                                        system("pause");
                                                                        return 0;
                                                                    }
                                                                    break;
                                                                case 2:
                                                                    system("cls");
                                                                    puts("*********************************************************");
                                                                    puts("Achat de pass annule");
                                                                    puts("*********************************************************");
                                                                    return 0;
                                                                    break;
                                                                default:
                                                                    break;
                                                                }
                                                            }
                                                            else
                                                            {
                                                                goto AC11;
                                                            }
                                                        }
                                                    break;
                                                case 2: // Forfait 1h a 2000 GNF
                                                    AC12:
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            puts("Confirmez-vous l'achat de pass 60mn ?");
                                                            puts("Prix: 2000 GNF");
                                                            puts("validite: 24H");
                                                            puts("1.Oui");
                                                            puts("2.Non");
                                                            puts("*********************************************************");
                                                            scanf("%d", &d);

                                                            if(d==1 || d==2)
                                                            {
                                                                switch(d)
                                                                {
                                                                case 1: // Oui
                                                                    if(mont>=2000)
                                                                    {
                                                                        system("cls");
                                                                        puts("*********************************************************");
                                                                        puts("Felicitation vous avez souscrit au forfait 1h a 2000 GNF valable 24h");
                                                                        puts("*********************************************************");
                                                                        system("pause");
                                                                        return 0;
                                                                    }
                                                                    else
                                                                    {
                                                                        system("cls");
                                                                        puts("*********************************************************");
                                                                        printf("Votre compte presente un solde insuffisant. \n");
                                                                        printf("Veuillez recharger afin d'acheter un nouveau pass. \n");
                                                                        puts("*********************************************************");
                                                                        system("pause");
                                                                        return 0;
                                                                    }
                                                                    break;
                                                                case 2:
                                                                    system("cls");
                                                                    puts("*********************************************************");
                                                                    puts("Achat de pass annule");
                                                                    puts("*********************************************************");
                                                                    system("pause");
                                                                    return 0;
                                                                    break;
                                                                default:
                                                                    break;
                                                                }
                                                            }
                                                            else
                                                            {
                                                                goto AC12;
                                                            }
                                                        }
                                                    break;
                                                case 3: // forfait 2h10 à 3900 GNF
                                                    AC13:
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            puts("Confirmez-vous l'achat du pass 2h10mn ?");
                                                            puts("Prix: 3 900 GNF");
                                                            puts("Valide: 24H");
                                                            puts("1.Oui");
                                                            puts("2.Non");
                                                            puts("*********************************************************");

                                                            scanf("%d", &d);

                                                            if(d==1 || d==2)
                                                            {
                                                                switch(d)
                                                                {
                                                                case 1: // Oui
                                                                    if(mont>=3900)
                                                                    {
                                                                        system("cls");
                                                                        puts("*********************************************************");
                                                                        puts("Felicitation vous avez avez souscrit au pass 2h10mn a 3900F valable 24h");
                                                                        puts("*********************************************************");
                                                                        system("pause");
                                                                        return 0;
                                                                    }
                                                                    else
                                                                    {
                                                                        system("cls");
                                                                        puts("*********************************************************");
                                                                        printf("Votre compte presente un solde insuffisant. \n");
                                                                        printf("Veuillez recharger afin d'acheter un nouveau pass. \n");
                                                                        puts("*********************************************************");
                                                                        system("pause");
                                                                        return 0;
                                                                    }
                                                                    break;
                                                                case 2:
                                                                    system("cls");
                                                                    puts("*********************************************************");
                                                                    puts("Achat de pass Annule");
                                                                    puts("*********************************************************");
                                                                    system("pause");
                                                                    return 0;
                                                                    break;
                                                                default:
                                                                    break;
                                                                }
                                                            }
                                                            else
                                                            {
                                                                goto AC13;
                                                            }
                                                        }
                                                    break;
                                                default:
                                                    break;
                                                }
                                            }
                                            else
                                            {
                                                goto AC1;
                                            }
                                        }
                                }
                                else
                                {
                                    goto AC;
                                }
                            }
                        break;
                    case 5: // Solde Internet
                        AD:
                            {
                                system("cls");
                                puts("*********************************************************");
                                printf("Vous avez %d Mo et Bonus SMS:0.03MoSMS et expire le 21/02/2022 \n", forfait);
                                puts("....................");

                                puts("9.Accueil");
                                puts("0.Quitter");
                                puts("*********************************************************");

                                scanf("%d",&b);

                                if(b==9)
                                {
                                    goto X;
                                }
                                else if(b==0)
                                {
                                   break;
                                }
                                else
                                {
                                    goto AD;
                                }
                            }
                        break;
                    case 6: // SOS Internet
                        AE:
                            {
                                system("cls");
                                puts("*********************************************************");
                                puts("Confirmez-vous l'emprunt du Pass SOS Internet 50 Mo a 1500F? ");
                                puts("Vous serez debitez de 1700F au prochain Rechargement, `\nsoit 1500F + 200F de commission");

                                puts("1.Oui");
                                puts("2.Non");
                                puts("*********************************************************");
                                scanf("%d", &b);

                                if(b==1 || b==2)
                                {
                                    switch(b)
                                    {
                                    case 1:
                                        system("cls");
                                        puts("*********************************************************");
                                        puts("Desole! Vous ne pouvez pas souscrire a ce Service.");
                                        puts("Pour plus de d'information, veuillez appeler le sercie client au 6277.");
                                        puts("*********************************************************");
                                        system("pause");
                                        return 0;
                                        break;
                                    case 2:
                                        system("cls");
                                        puts("*********************************************************");
                                        puts("Emprunt de Pass annulé");
                                        puts("*********************************************************");
                                        system("pause");
                                        return 0;
                                        break;
                                    default:
                                        break;
                                    }
                                }
                                else
                                {
                                    goto AE;
                                }
                            }
                        break;
                    case 7: // Achat pour un autre et Box
                        AF:
                            {
                                system("cls");
                                puts("*********************************************************");
                                puts("Entre le numero beneficiaire du Pass:");
                                puts("*********************************************************");
                                scanf("%d",&num);

                                if((num>=610000000)&&(num<628000000))
                                {
                                    system("cls");
                                    AF1:
                                        {
                                            system("cls");
                                            puts("*********************************************************");
                                            puts("1.Pass Jour");
                                            puts("2.Pass Semaine");
                                            puts("3.Pass Mois");
                                            puts("4.Pass Mobile TV");
                                            puts("0.Retour");
                                            puts("*********************************************************");
                                            scanf("%d",&b);

                                            if(b==0)
                                            {
                                                goto AF;
                                            }
                                            else if(b>=1 && b<=4)
                                            {
                                                switch(b)
                                                {
                                                case 1: // Pass Jour
                                                    AF11:
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            puts("Choir un Pass :");
                                                            puts("1.Pass Jour Decouverte ");
                                                            puts("2.Pass My Friends 100Mo (Facebook)");
                                                            puts("3.Pass Jour plus");
                                                            puts("4.Pass Jour Extra");
                                                            puts("5.Pass Nuit");
                                                            puts("6.Pass Education");
                                                            puts("*********************************************************");

                                                            scanf("%d", &c);

                                                            if(c>=1 || c>=6)
                                                            {
                                                                switch(c)
                                                                {
                                                                case 1: // Pass Jour Decouverte
                                                                    AF111:
                                                                        {
                                                                            system("cls");
                                                                            puts("*********************************************************");
                                                                            puts("Confirmez-vosu l'achat du Pass decouverte de 30Mo valable 24h?");
                                                                            puts("Prix: 980 GNF");
                                                                            puts("1.Oui");
                                                                            puts("2.Non");
                                                                            puts("0.Retour achat de pass");
                                                                            puts("*********************************************************");

                                                                            scanf("%d", &d);

                                                                            if(d==0)
                                                                            {
                                                                                goto AF11;
                                                                            }
                                                                            else if(d==1 || d==2)
                                                                            {
                                                                                switch(d)
                                                                                {
                                                                                case 1: // Oui
                                                                                    if(mont>=980)
                                                                                    {
                                                                                        system("cls");
                                                                                        puts("*********************************************************");
                                                                                        puts("Felicitation vous avez souscrit au Pass 30Mo au valable 24H a 980 GNF");
                                                                                        puts("*********************************************************");
                                                                                        system("pause");
                                                                                        return 0;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        system("cls");
                                                                                        puts("*********************************************************");
                                                                                        printf("Votre compte presente un solde insuffisant. \n");
                                                                                        printf("Veuillez recharger afin d'acheter un nouveau pass. \n");
                                                                                        puts("*********************************************************");
                                                                                        system("pause");
                                                                                        return 0;
                                                                                    }
                                                                                    break;
                                                                                case 2: // Non
                                                                                    system("cls");
                                                                                    puts("*********************************************************");
                                                                                    puts("Achat de pass annule ");
                                                                                    puts("*********************************************************");
                                                                                    system("pause");
                                                                                    return 0;
                                                                                    break;
                                                                                default:
                                                                                    break;
                                                                                }
                                                                            }
                                                                            else
                                                                            {
                                                                                goto AF111;
                                                                            }
                                                                        }
                                                                    break;
                                                                case 2: // Pass My Friends 100Mo (Facebook)
                                                                    AF112:
                                                                        {
                                                                            system("cls");
                                                                            puts("*********************************************************");
                                                                            puts("Confirmez-vosu l'achat du pass My Friends valable 24?");
                                                                            puts("Prix: 1 950 GNF");
                                                                            puts("1.Oui");
                                                                            puts("2.Non");
                                                                            puts("0.Retour achat de pass");
                                                                            puts("*********************************************************");

                                                                            scanf("%d", &d);

                                                                            if(d==0)
                                                                            {
                                                                                goto AF11;
                                                                            }
                                                                            else if(d==1 || d==2)
                                                                            {
                                                                                switch(d)
                                                                                {
                                                                                case 1: // Oui
                                                                                    if(mont>=1950)
                                                                                    {
                                                                                        system("cls");
                                                                                        puts("*********************************************************");
                                                                                        puts("Felicitation vous avez souscrit au pass My Friends 100Mo \nvalable au 24H a 1950 GNF");
                                                                                        puts("*********************************************************");
                                                                                        system("pause");
                                                                                        return 0;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        system("cls");
                                                                                        puts("*********************************************************");
                                                                                        printf("Votre compte presente un solde insuffisant. \n");
                                                                                        printf("Veuillez recharger afin d'acheter un nouveau pass. \n");
                                                                                        puts("*********************************************************");
                                                                                        system("pause");
                                                                                        return 0;
                                                                                    }
                                                                                    break;
                                                                                case 2: // Non
                                                                                    system("cls");
                                                                                    puts("*********************************************************");
                                                                                    puts("Achat de pass annule");
                                                                                    puts("*********************************************************");
                                                                                    system("pause");
                                                                                    return 0;
                                                                                    break;
                                                                                default:
                                                                                    break;
                                                                                }
                                                                            }
                                                                            else
                                                                            {
                                                                                goto AF112;
                                                                            }
                                                                        }
                                                                    break;
                                                                case 3: // Pass Jour plus
                                                                    AF113:
                                                                        {
                                                                            system("cls");
                                                                            puts("*********************************************************");
                                                                            puts("Confirmez-vous l'achat du pass Jour Plus 150Mo valable 24h ?");
                                                                            puts("Prix: 2950 GNF");
                                                                            puts("1.Oui");
                                                                            puts("2.Non");
                                                                            puts("0.Retour achat de pass");
                                                                            puts("*********************************************************");

                                                                            scanf("%d",&d);

                                                                            if(d==0)
                                                                            {
                                                                                goto AF11;
                                                                            }
                                                                            else if(d==1 || d==2)
                                                                            {
                                                                                switch(d)
                                                                                {
                                                                                case 1: // Oui
                                                                                    if(mont>=2950)
                                                                                    {
                                                                                        system("cls");
                                                                                        puts("*********************************************************");
                                                                                        puts("Felicitation vous souscrit au pass Jour Plus a 150Mo \nvalable 24H a 2950 GNF");
                                                                                        puts("*********************************************************");
                                                                                        system("pause");
                                                                                        return 0;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        system("cls");
                                                                                        puts("*********************************************************");
                                                                                        printf("Votre compte presente un solde insuffisant. \n");
                                                                                        printf("Veuillez recharger afin d'acheter un nouveau pass. \n");
                                                                                        puts("*********************************************************");
                                                                                        system("pause");
                                                                                        return 0;
                                                                                    }
                                                                                    break;
                                                                                case 2: //Non
                                                                                    break;
                                                                                default:
                                                                                    break;
                                                                                }
                                                                            }
                                                                            else
                                                                            {
                                                                                goto AF113;
                                                                            }
                                                                        }
                                                                    break;
                                                                case 4: // Pass Jour Extra
                                                                    AF114:
                                                                        {
                                                                            system("cls");
                                                                            puts("*********************************************************");
                                                                            puts("Confirmez-vous l'achat du pass Jour Extra 350Mo valable 24h ?");
                                                                            puts("Prix: 6400 GNF");
                                                                            puts("1.Oui");
                                                                            puts("2.Non");
                                                                            puts("0.Retour achat de pass");
                                                                            puts("*********************************************************");

                                                                            scanf("%d",&d);

                                                                            if(d==0)
                                                                            {
                                                                                goto AF11;
                                                                            }
                                                                            else if(d==1 || d==2)
                                                                            {
                                                                                switch(d)
                                                                                {
                                                                                case 1: // Oui
                                                                                    if(mont>=6400)
                                                                                    {
                                                                                        system("cls");
                                                                                        puts("*********************************************************");
                                                                                        puts("Felicitation vous avez souscrit au Pass Jour Extra 350Mo \nvalable 24h a 6400GNF");
                                                                                        puts("*********************************************************");
                                                                                        system("pause");
                                                                                        return 0;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        system("cls");
                                                                                        puts("*********************************************************");
                                                                                        printf("Votre compte presente un solde insuffisant. \n");
                                                                                        printf("Veuillez recharger afin d'acheter un nouveau pass. \n");
                                                                                        puts("*********************************************************");
                                                                                        system("pause");
                                                                                        return 0;
                                                                                    }
                                                                                    break;
                                                                                case 2: // Non
                                                                                    system("cls");
                                                                                    puts("*********************************************************");
                                                                                    puts("Achat de pass annule");
                                                                                    puts("*********************************************************");
                                                                                    system("pause");
                                                                                    return 0;
                                                                                    break;
                                                                                default:
                                                                                    break;
                                                                                }
                                                                            }
                                                                            else
                                                                            {
                                                                                goto AF114;
                                                                            }
                                                                        }
                                                                    break;
                                                                case 5: // Pass Nuit
                                                                    AF115:
                                                                        {
                                                                            system("cls");
                                                                            puts("*********************************************************");
                                                                            puts("1.Pass Nuit_400 Mo");
                                                                            puts("2.Pass Nuit_1G0");
                                                                            puts("*********************************************************");

                                                                            scanf("%d",&d);
                                                                            if(d==1 || d==2)
                                                                            {
                                                                                switch(d)
                                                                                {
                                                                                case 1: // Pass Nuit_400
                                                                                    AF1151:
                                                                                        {
                                                                                            system("cls");
                                                                                            puts("*********************************************************");
                                                                                            puts("Confirmez-vous l'achat du Pass Nuit_400Mo valable entre 0h et 07h ?");
                                                                                            puts("Prix: 2500 GNF");
                                                                                            puts("1.Oui");
                                                                                            puts("2.Non");
                                                                                            puts("0.Retour achat de pass");
                                                                                            puts("*********************************************************");

                                                                                            scanf("%d",&e);

                                                                                            if(e==0)
                                                                                            {
                                                                                                goto AF115;
                                                                                            }
                                                                                            else if(e==1 || e==2)
                                                                                            {
                                                                                                switch(e)
                                                                                                {
                                                                                                case 1: // Oui
                                                                                                    if(mont>=2500)
                                                                                                    {
                                                                                                        system("cls");
                                                                                                        puts("*********************************************************");
                                                                                                        puts("Felicitation vous avez souscrit au pass  Nuit_400Mo \na 2500 GNF valable entre 0h et 07h");
                                                                                                        puts("*********************************************************");
                                                                                                        system("pause");
                                                                                                        return 0;
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                        system("cls");
                                                                                                        puts("*********************************************************");
                                                                                                        printf("Votre compte presente un solde insuffisant. \n");
                                                                                                        printf("Veuillez recharger afin d'acheter un nouveau pass. \n");
                                                                                                        puts("*********************************************************");
                                                                                                        system("pause");
                                                                                                        return 0;
                                                                                                    }
                                                                                                    break;
                                                                                                case 2: // Non
                                                                                                    system("cls");
                                                                                                    puts("*********************************************************");
                                                                                                    puts("Achat de pass annule");
                                                                                                    puts("*********************************************************");
                                                                                                    system("pause");
                                                                                                    return 0;
                                                                                                    break;
                                                                                                default:
                                                                                                    break;
                                                                                                }
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                goto AF1151;
                                                                                            }
                                                                                        }
                                                                                    break;
                                                                                case 2: // Pass Nuit 1Go
                                                                                    AF1152:
                                                                                        {
                                                                                            system("cls");
                                                                                            puts("*********************************************************");
                                                                                            puts("Confirmez-vous l'acaht du Pass Nuit_1Go valable entre 0h et 07h ?");
                                                                                            puts("Prix: 6 000 GNF");
                                                                                            puts("1.Oui");
                                                                                            puts("2.Non");
                                                                                            puts("0.Retour achat de pass");
                                                                                            puts("*********************************************************");

                                                                                            scanf("%d",&e);

                                                                                            if(e==0)
                                                                                            {
                                                                                                goto AF115;
                                                                                            }
                                                                                            else if(e==1 || e==2)
                                                                                            {
                                                                                                switch(e)
                                                                                                {
                                                                                                case 1: // Oui
                                                                                                    if(mont>=6000)
                                                                                                    {
                                                                                                        system("cls");
                                                                                                        puts("*********************************************************");
                                                                                                        puts("Felicitation vous avez souscrit au pass Nuit 1Go \nvalable 24H a 6000 GNF ");
                                                                                                        puts("*********************************************************");
                                                                                                        system("pause");
                                                                                                        return 0;
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                        system("cls");
                                                                                                        puts("*********************************************************");
                                                                                                        printf("Votre compte presente un solde insuffisant. \n");
                                                                                                        printf("Veuillez recharger afin d'acheter un nouveau pass. \n");
                                                                                                        puts("*********************************************************");
                                                                                                        system("pause");
                                                                                                        return 0;
                                                                                                    }
                                                                                                    break;
                                                                                                case 2: // Non
                                                                                                    break;
                                                                                                default:
                                                                                                    break;
                                                                                                }
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                goto AF1152;
                                                                                            }
                                                                                        }
                                                                                    break;
                                                                                default :
                                                                                    break;
                                                                                }
                                                                            }
                                                                            else
                                                                            {
                                                                                goto AF115;
                                                                            }
                                                                        }
                                                                    break;
                                                                case 6: // Pass Education
                                                                    AF116:
                                                                        {
                                                                            system("cls");
                                                                            puts("*********************************************************");
                                                                            puts("1.Forfait 100");
                                                                            puts("*********************************************************");

                                                                            scanf("%d",&e);
                                                                            if(e==1)
                                                                            {
                                                                                system("cls");
                                                                                puts("*********************************************************");
                                                                                puts("Confirmez-vous l'achat du pass 100 Mo ?");
                                                                                puts("Prix: 1500 GNF");
                                                                                puts("Validite: 24h");
                                                                                puts("1.Oui");
                                                                                puts("2.Non");
                                                                                puts("0.Precedent");
                                                                                puts("*********************************************************");

                                                                                scanf("%d",&f);

                                                                                if(f==0)
                                                                                {
                                                                                    goto AF11;
                                                                                }
                                                                                else if(f==1 || f==2)
                                                                                {
                                                                                    switch(f)
                                                                                    {
                                                                                    case 1:
                                                                                        if(mont>=1500)
                                                                                        {
                                                                                            system("cls");
                                                                                            puts("*********************************************************");
                                                                                            puts("Felicitation vous avez souscrit au Pass Education 100Mo \nvalable 24h a 1500 GNF");
                                                                                            puts("*********************************************************");
                                                                                            system("pause");
                                                                                            return 0;
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                            system("cls");
                                                                                            puts("*********************************************************");
                                                                                            puts("Votre compte presente un solde insuffisant.");
                                                                                            puts("Veuillez recharger afin d'acheter un nouveau pass.");
                                                                                            puts("*********************************************************");
                                                                                            system("pause");
                                                                                            return 0;
                                                                                            break;
                                                                                        }
                                                                                        break;
                                                                                    case 2:
                                                                                        break;
                                                                                    default:
                                                                                        break;
                                                                                    }
                                                                                }
                                                                                else
                                                                                {
                                                                                    goto AF116;
                                                                                }
                                                                            }
                                                                            else
                                                                            {
                                                                                goto AF116;
                                                                            }
                                                                        }
                                                                    break;
                                                                default:
                                                                    goto AF11;
                                                                    break;
                                                                }
                                                            }
                                                            else
                                                            {
                                                                goto AF11;
                                                            }
                                                        }
                                                    break;
                                                case 2: // Pass Semaine
                                                    AF12:
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            puts("Choir un Pass: ");
                                                            puts("1.Pass Smart 800Mo");
                                                            puts("2.Pass Smart Plus 1.8Go");
                                                            puts("9.Accueil");
                                                            puts("*********************************************************");

                                                            scanf("%d",&c);

                                                            if(c==9)
                                                            {
                                                                goto AF1;
                                                            }
                                                            else if(c==1 || c==2)
                                                            {
                                                                switch(c)
                                                                {
                                                                case 1: // Pass Smart 800Mo
                                                                    AF121:
                                                                        {
                                                                            system("cls");
                                                                            puts("*********************************************************");
                                                                            puts("Confirmez-vous l'achat du pass Smart 800Mo valable 7 Jours?");
                                                                            puts("Prix: 14 000 GNF");
                                                                            puts("1.Oui");
                                                                            puts("2.Non");
                                                                            puts("0.Retour achat de pass");
                                                                            puts("*********************************************************");

                                                                            scanf("%d", &d);

                                                                            if(d==0)
                                                                            {
                                                                                goto AF12;
                                                                            }
                                                                            else if(d==1 || d==2)
                                                                            {
                                                                                switch(d)
                                                                                {
                                                                                case 1: // Oui
                                                                                    if(mont>=14000)
                                                                                    {
                                                                                        system("cls");
                                                                                        puts("*********************************************************");
                                                                                        puts("Felicitation vous avez souscrit au pass Smart 800Mo \nvalable 7Jours a 14000 GNF ");
                                                                                        puts("*********************************************************");
                                                                                        system("pause");
                                                                                        return 0;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        system("cls");
                                                                                        puts("*********************************************************");
                                                                                        printf("Votre compte presente un solde insuffisant. \n");
                                                                                        printf("Veuillez recharger afin d'acheter un nouveau pass. \n");
                                                                                        puts("*********************************************************");
                                                                                        system("pause");
                                                                                        return 0;
                                                                                    }
                                                                                    break;
                                                                                case 2: // Non
                                                                                    system("cls");
                                                                                    puts("*********************************************************");
                                                                                    puts("Achat de pass annule");
                                                                                    puts("*********************************************************");
                                                                                    system("pause");
                                                                                    break;
                                                                                default:
                                                                                    break;
                                                                                }
                                                                            }
                                                                            else
                                                                            {
                                                                                goto AF121;
                                                                            }
                                                                        }
                                                                    break;
                                                                case 2: // Pass Smart Plus 1.8Go
                                                                    AF122:
                                                                        {
                                                                            system("cls");
                                                                            puts("*********************************************************");
                                                                            puts("Confirmez-vous l'achat du pass Smart Plus_1.8Go valable 7 Jours");
                                                                            puts("Prix: 31000GNF");
                                                                            puts("1.Oui");
                                                                            puts("2.Non");
                                                                            puts("0.Retour achat de pass");
                                                                            puts("*********************************************************");

                                                                            scanf("%d", &d);

                                                                            if(d==0)
                                                                            {
                                                                                goto AF12;
                                                                            }
                                                                            else if(d==1 || d==2)
                                                                            {
                                                                                switch(d)
                                                                                {
                                                                                case 1: // OUi
                                                                                    if(mont>=31000)
                                                                                    {
                                                                                        system("cls");
                                                                                        puts("*********************************************************");
                                                                                        puts("Felicitation vous avez souscrit au Pass Smart Plus 1.8Go \nvalable 7Jours a 31 000 GNF");
                                                                                        puts("*********************************************************");
                                                                                        system("pause");
                                                                                        return 0;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        system("cls");
                                                                                        puts("*********************************************************");
                                                                                        printf("Votre compte presente un solde insuffisant. \n");
                                                                                        printf("Veuillez recharger afin d'acheter un nouveau pass. \n");
                                                                                        puts("*********************************************************");
                                                                                        system("pause");
                                                                                        return 0;
                                                                                    }
                                                                                    break;
                                                                                case 2: // Non
                                                                                    system("cls");
                                                                                    puts("*********************************************************");
                                                                                    puts("Achat de pass annule");
                                                                                    puts("*********************************************************");
                                                                                    system("pause");
                                                                                    break;
                                                                                default:
                                                                                    break;
                                                                                }
                                                                            }
                                                                            else
                                                                            {
                                                                                goto AF122;
                                                                            }
                                                                        }
                                                                    break;
                                                                default:
                                                                    break;
                                                                }
                                                            }
                                                            else
                                                            {
                                                                goto AF12;
                                                            }
                                                        }
                                                    break;
                                                case 3: // Pass Mois
                                                    AF13:
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            puts("Choir un Pass:");
                                                            puts("1.Pass Light");
                                                            puts("2.Pass Plus");
                                                            puts("3.Pass Max");
                                                            puts("9.Accueil");
                                                            puts("*********************************************************");
                                                            scanf("%d",&c);

                                                            if(c==9)
                                                            {
                                                                goto X;
                                                            }
                                                            else if(c>=1 && c<=3)
                                                            {
                                                                switch(c)
                                                                {
                                                                case 1: // Pass Lights
                                                                    AF131:
                                                                        {
                                                                            system("cls");
                                                                            puts("*********************************************************");
                                                                            puts("Confirmez-vous l'achat du pass Light de 3 Go valable 30 Jours ?");
                                                                            puts("Prix: 50 000 GNF");
                                                                            puts("1.Oui");
                                                                            puts("2.Non");
                                                                            puts("0.Retour achat de pass");
                                                                            puts("*********************************************************");

                                                                            scanf("%d",&d);

                                                                            if(d==0)
                                                                            {
                                                                                goto AF13;
                                                                            }
                                                                            else if(d==1 || d==2)
                                                                            {
                                                                                switch(d)
                                                                                {
                                                                                case 1: // Oui
                                                                                    if(mont>=50000)
                                                                                    {
                                                                                        system("cls");
                                                                                        puts("*********************************************************");
                                                                                        puts("Felicitation vous avez souscrit au Pass Light de 3Go valable 30 Jours a 50 000 GNF ");
                                                                                        puts("*********************************************************");
                                                                                        system("pause");
                                                                                        return 0;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        system("cls");
                                                                                        puts("*********************************************************");
                                                                                        printf("Votre compte presente un solde insuffisant. \n");
                                                                                        printf("Veuillez recharger afin d'acheter un nouveau pass. \n");
                                                                                        puts("*********************************************************");
                                                                                        system("pause");
                                                                                        return 0;
                                                                                    }
                                                                                    break;
                                                                                case 2:
                                                                                    system("cls");
                                                                                    puts("*********************************************************");
                                                                                    puts("Achat de pass annule ");
                                                                                    puts("*********************************************************");
                                                                                    system("pause");
                                                                                    break;
                                                                                default:
                                                                                    break;
                                                                                }
                                                                            }
                                                                            else
                                                                            {
                                                                                goto AF131;
                                                                            }
                                                                        }
                                                                    break;
                                                                case 2: // Pass Plus
                                                                    AF132:
                                                                        {
                                                                            system("cls");
                                                                            puts("*********************************************************");
                                                                            puts("Confirmez-vous l'achat du pass Plus 6,5 Go valable 30 Jours ?");
                                                                            puts("Prix: 105 000 GNF");
                                                                            puts("1.Oui");
                                                                            puts("2.Non");
                                                                            puts("0.Retour achat de pass ");
                                                                            puts("*********************************************************");

                                                                            scanf("%d", &d);

                                                                            if(d==0)
                                                                            {
                                                                                goto AF13;
                                                                            }
                                                                            else if(d==1 || d==2)
                                                                            {
                                                                                switch(d)
                                                                                {
                                                                                case 1: // Oui
                                                                                    if(mont>=105000)
                                                                                    {
                                                                                        system("cls");
                                                                                        puts("*********************************************************");
                                                                                        puts("Felicitation vous avez souscrit au pass Plus 6,5Go \nvalable 30 Jours a 105 000 GNF ");
                                                                                        puts("*********************************************************");
                                                                                        system("pause");
                                                                                        return 0;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        system("cls");
                                                                                        puts("*********************************************************");
                                                                                        printf("Votre compte presente un solde insuffisant. \n");
                                                                                        printf("Veuillez recharger afin d'acheter un nouveau pass. \n");
                                                                                        puts("*********************************************************");
                                                                                        system("pause");
                                                                                        return 0;
                                                                                    }
                                                                                    break;
                                                                                case 2: // Non
                                                                                    system("cls");
                                                                                    puts("*********************************************************");
                                                                                    puts("Achat de pass Annule ");
                                                                                    puts("*********************************************************");
                                                                                    system("pause");
                                                                                    return 0;
                                                                                    break;
                                                                                default:
                                                                                    break;
                                                                                }
                                                                            }
                                                                            else
                                                                            {
                                                                                goto AF132;
                                                                            }
                                                                        }
                                                                    break;
                                                                case 3: // Pass Max
                                                                    AF133:
                                                                        {
                                                                            system("cls");
                                                                            puts("*********************************************************");
                                                                            puts("Confirmez-vous l'achat du pass Max 15 Go valable 30 Jours ?");
                                                                            puts("Prix: 185 000 GNF");
                                                                            puts("1.Oui");
                                                                            puts("2.Non");
                                                                            puts("0.Retour achat de pass ");
                                                                            puts("*********************************************************");

                                                                            scanf("%d",&d);

                                                                            if(d==0)
                                                                            {
                                                                                goto AF13;
                                                                            }
                                                                            else if(d==1 || d==2)
                                                                            {
                                                                                switch(d)
                                                                                {
                                                                                case 1: // Oui
                                                                                    if(mont>=185000)
                                                                                    {
                                                                                        system("cls");
                                                                                        puts("*********************************************************");
                                                                                        puts("Felicitation vous avez souscrit au Pass Max 15Go \nvalable 30Jours a 185 000 GNF");
                                                                                        puts("*********************************************************");
                                                                                        system("pause");
                                                                                        return 0;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        system("cls");
                                                                                        puts("*********************************************************");
                                                                                        printf("Votre compte presente un solde insuffisant. \n");
                                                                                        printf("Veuillez recharger afin d'acheter un nouveau pass. \n");
                                                                                        puts("*********************************************************");
                                                                                        system("pause");
                                                                                        return 0;
                                                                                    }
                                                                                    break;
                                                                                case 2: // Non
                                                                                    system("cls");
                                                                                    puts("*********************************************************");
                                                                                    puts("Achat de pass annule");
                                                                                    puts("*********************************************************");
                                                                                    system("pause");
                                                                                    break;
                                                                                default:
                                                                                    break;
                                                                                }
                                                                            }
                                                                            else
                                                                            {
                                                                                goto AF133;
                                                                            }
                                                                        }
                                                                    break;
                                                                default:
                                                                    break;
                                                                }
                                                            }
                                                            else
                                                            {
                                                                goto AF13;
                                                            }
                                                        }
                                                    break;
                                                case 4: // Pass Mobile TV
                                                    AF14:
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                            puts("1.Forfait 40mn à 15OO GNF");
                                                            puts("2.Forfait 1h a 2000 GNF");
                                                            puts("3.Forfait 2h10mn a 3900 GNF");
                                                            puts("0.Retour achat pass");
                                                            puts("*********************************************************");

                                                            scanf("%d",&c);

                                                            if(c==0)
                                                            {
                                                                goto AF1;
                                                            }
                                                            else if(c>=1 && c<=3)
                                                            {
                                                                switch(c)
                                                                {
                                                                case 1: // forfait 40mn a 1500 GNF
                                                                    AF141:
                                                                        {
                                                                            system("cls");
                                                                            puts("*********************************************************");
                                                                            puts("Confirmez-vous l'achat du pass mobile TV ? ");
                                                                            puts("Prix: 1 500 GNF");
                                                                            puts("Validite: 24 h");
                                                                            puts("1.Oui");
                                                                            puts("2.Non");
                                                                            puts("0.Retour achat de pass ");
                                                                            puts("*********************************************************");

                                                                            scanf("%d",&d);

                                                                            if(d==0)
                                                                            {
                                                                                goto AF14;
                                                                            }
                                                                            else if(d==1 || d==2)
                                                                            {
                                                                                switch(d)
                                                                                {
                                                                                case 1: // Oui
                                                                                    if(mont>=1500)
                                                                                    {
                                                                                        system("cls");
                                                                                        puts("*********************************************************");
                                                                                        puts("Felicitation vous avez souscrit au pass mobile TV 40mn \nvalable 24h a 1500 GNF");
                                                                                        puts("*********************************************************");
                                                                                        system("pause");
                                                                                        return 0;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        system("cls");
                                                                                        puts("*********************************************************");
                                                                                        printf("Votre compte presente un solde insuffisant. \n");
                                                                                        printf("Veuillez recharger afin d'acheter un nouveau pass. \n");
                                                                                        puts("*********************************************************");
                                                                                        system("pause");
                                                                                        return 0;
                                                                                    }
                                                                                    break;
                                                                                case 2: // Non
                                                                                    system("cls");
                                                                                    puts("*********************************************************");
                                                                                    puts("Achat de pass annule ");
                                                                                    puts("*********************************************************");
                                                                                    system("pause");
                                                                                    return 0;
                                                                                    break;
                                                                                default:
                                                                                    break;
                                                                                }
                                                                            }
                                                                            else
                                                                            {
                                                                                goto AF141;
                                                                            }
                                                                        }
                                                                    break;
                                                                case 2: // Forfait 1h a 2000 GNF
                                                                    AF142:
                                                                        {
                                                                            system("cls");
                                                                            puts("*********************************************************");
                                                                            puts("Confirmez-vous l'achat du pass 60mn ? ");
                                                                            puts("Prix: 2 000 GNF");
                                                                            puts("Validite: 24 h");
                                                                            puts("1.Oui");
                                                                            puts("2.Non");
                                                                            puts("0.Retour achat de pass ");
                                                                            puts("*********************************************************");

                                                                            scanf("%d",&d);

                                                                            if(d==0)
                                                                            {
                                                                                goto AF14;
                                                                            }
                                                                            else if(d==1 || d==2)
                                                                            {
                                                                                switch(d)
                                                                                {
                                                                                case 1: // Oui
                                                                                    if(mont>=2000)
                                                                                    {
                                                                                        system("cls");
                                                                                        puts("*********************************************************");
                                                                                        puts("Felicitation vous avez souscrit au pass mobile TV 60mn valable 24h a 2 000 GNF");
                                                                                        puts("*********************************************************");
                                                                                        system("pause");
                                                                                        return 0;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        system("cls");
                                                                                        puts("*********************************************************");
                                                                                        puts("Votre compte presente un solde insuffisant. ");
                                                                                        puts("Veuillez recharger afin d'acheter un nouveau pass. ");
                                                                                        puts("*********************************************************");
                                                                                        system("pause");
                                                                                        return 0;
                                                                                    }
                                                                                    break;
                                                                                case 2: // Non
                                                                                    system("cls");
                                                                                    puts("*********************************************************");
                                                                                    puts("Achat de pass annule ");
                                                                                    puts("*********************************************************");
                                                                                    system("pause");
                                                                                    return 0;
                                                                                    break;
                                                                                default:
                                                                                    break;
                                                                                }
                                                                            }
                                                                            else
                                                                            {
                                                                                goto AF142;
                                                                            }
                                                                        }
                                                                    break;
                                                                case 3: // Forfait 2h10mn a 3900 GNF
                                                                    AF143:
                                                                        {
                                                                            system("cls");
                                                                            puts("*********************************************************");
                                                                            puts("Confirmez-vous l'achat du pass 2h10min ? ");
                                                                            puts("Prix: 3 900 GNF");
                                                                            puts("Validite: 24 h");
                                                                            puts("1.Oui");
                                                                            puts("2.Non");
                                                                            puts("0.Retour achat de pass ");
                                                                            puts("*********************************************************");

                                                                            scanf("%d",&d);

                                                                            if(d==0)
                                                                            {
                                                                                goto AF14;
                                                                            }
                                                                            else if(d==1 || d==2)
                                                                            {
                                                                                switch(d)
                                                                                {
                                                                                case 1: // Oui
                                                                                    if(mont>=3900)
                                                                                    {
                                                                                        system("cls");
                                                                                        puts("*********************************************************");
                                                                                        puts("Felicitation  vous avez souscrit au pass Mobile TV 2h10min \nvalable 24 a 3 900 GNF");
                                                                                        puts("*********************************************************");
                                                                                        system("pause");
                                                                                        return 0;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        system("cls");
                                                                                        puts("*********************************************************");
                                                                                        puts("Votre compte presente un solde insuffisant. ");
                                                                                        puts("Veuillez recharger afin d'acheter un nouveau pass. ");
                                                                                        puts("*********************************************************");
                                                                                        system("pause");
                                                                                        return 0;
                                                                                    }
                                                                                    break;
                                                                                case 2: // Non
                                                                                    system("cls");
                                                                                    puts("*********************************************************");
                                                                                    puts("Achat de pass annule ");
                                                                                    puts("*********************************************************");
                                                                                    system("pause");
                                                                                    return 0;
                                                                                    break;
                                                                                default:
                                                                                    break;
                                                                                }
                                                                            }
                                                                            else
                                                                            {
                                                                                goto AF143;
                                                                            }
                                                                        }
                                                                    break;
                                                                default:
                                                                    break;
                                                                }
                                                            }
                                                            else
                                                            {
                                                                goto AF14;
                                                            }
                                                        }
                                                    break;
                                                default:
                                                    break;
                                                }
                                            }
                                            else
                                            {
                                                goto AF1;
                                            }
                                        }

                                }
                                else
                                {
                                    system("cls");
                                    puts("*********************************************************");
                                    puts("Mauvais numero! Veuillez entrer un numero Orange a 9 chiffres.");
                                    puts("*********************************************************");
                                }
                            }
                        break;
                    case 8: // Transfert Internet
                        AG:
                            {
                                system("cls");
                                puts("*********************************************************");
                                puts("Entrer le numero de telephone du beneficiaire \n ...");
                                puts("9.Accueil");
                                puts("0.Prec");
                                puts("*********************************************************");

                                scanf("%d",&num);
                                if(num==9 || num==0)
                                {
                                    switch(num)
                                    {
                                    case 0:
                                        AG1:
                                            {
                                                system("cls");
                                                puts("*********************************************************");
                                                puts("1. Transfert data ");
                                                puts("*********************************************************");

                                                scanf("%d",&b);
                                                if(b==1)
                                                {
                                                    goto AG;
                                                }
                                                else
                                                {
                                                    goto AG1;
                                                }
                                            }
                                        break;
                                    case 9:
                                        goto X;
                                        break;
                                    default:
                                        break;
                                    }
                                }
                                else if((num>=610000000)&&(num<628000000))
                                {
                                    system("cls");
                                    puts("*********************************************************");
                                    puts("Veuillez entre le volume du transfert (10 a 100 Mo)");
                                    puts("*********************************************************");

                                    scanf("%d", &d);

                                    if(d==9 || d==0)
                                    {
                                        switch(d)
                                        {
                                            case 0:
                                                goto X;
                                                break;
                                            case 9:
                                                goto AG;
                                                break;
                                            default:
                                                break;
                                        }
                                    }
                                    else
                                    {
                                        system("cls");
                                        puts("*********************************************************");
                                        printf("Vous allez transferer %d Mo vers le numero %d. ", d,num);
                                        puts("Entrer votre code secret pour confirmer ou 2 pour annuler ");
                                        puts("Frais: 250 GNF");
                                        puts("2.Annuler");
                                        puts("\n.....");
                                        puts("9.Accueil ");
                                        puts("0.Prec");
                                        puts("*********************************************************");

                                        scanf("%d",&cd);

                                        if(cd==0 || cd==9 || cd==2)
                                        {
                                            switch(e)
                                            {
                                            case 0:
                                                goto AG;
                                                break;
                                            case 9:
                                                goto X;
                                                break;
                                            case 2:
                                                return 0;
                                                break;
                                            default:
                                                break;
                                            }
                                        }
                                        else if(cd==2022 && cd<=forfait)
                                        {
                                            puts("******************************************* ");
                                            printf("Felicitation vous avez transfert %dMo vers\n le numero %d \n", d, num);
                                            puts("******************************************** ");
                                            system("pause");
                                            return 0;
                                        }
                                        else
                                        {
                                            puts("***********************************************************");
                                            puts("Transfert non effectue, Merci de reesayer ulterieurment. ");
                                            puts("************************************************************");
                                            system("pause");
                                            return 0;
                                        }
                                    }
                                }
                                else
                                {
                                    system("cls");
                                    puts("*********************************************************");
                                    puts("Numero incorrect, veuillez entrer un numero a 9 chiffres ...");
                                    puts("9.Accueil");
                                    puts("0.Prec");
                                    puts("*********************************************************");


                                    scanf("%d", &b);
                                    if(b==9 || b==0)
                                    {
                                       switch(b)
                                       {
                                       case 0:
                                           system("cls");
                                           puts("*********************************************************");
                                           puts("1.Transfert data ");
                                           puts("*********************************************************");

                                           scanf("%d",&c);

                                           if(c==1)
                                           {
                                               goto AG;
                                           }
                                        break;
                                       case 9:
                                           goto X;
                                        break;
                                       }
                                    }
                                }
                            }
                        break;
                    case 9: // Fa Atongo
                        AH:
                            {
                                system("cls");
                                puts("*********************************************************");
                                puts("1.Fa Atongo -24H");
                                puts("2.Fa Atongo -72H");
                                puts("3.consultation ");
                                puts("9.Retour");
                                puts("*********************************************************");

                                scanf("%d",&b);

                                if(b==9)
                                {
                                    goto X;
                                }
                                else if(b>=1 || b<=3)
                                {
                                    switch(b)
                                    {
                                    case 1: // Fa Atongo -24H
                                        AH1:
                                            {
                                                system("cls");
                                                puts("*********************************************************");
                                                puts("1.50 Mo(Facebook) + 10SMS a 1000 GNF");
                                                puts("2.150 Mo(Facebook)+15SMS a 2000 GNF");
                                                puts("*********************************************************");

                                                scanf("%d",&c);

                                                switch(c)
                                                {
                                                case 1: // 50 Mo(Facebook) + 10SMS a 1000 GNF
                                                     AH11:
                                                         {
                                                             system("cls");
                                                             puts("*********************************************************");
                                                             puts("Confirmez-vous l'achat du Forfait 50 Mo(Dedie Facebook) + 10SMS \n vers le reseau orange valable 24H?");
                                                             puts("Prix: 1.000GNF");
                                                             puts("1.Oui");
                                                             puts("2.Non");
                                                             puts("0.Retour achat de pass");
                                                             puts("*********************************************************");

                                                             scanf("%d",&d);

                                                             if(d==0)
                                                             {
                                                                 goto AH1;
                                                             }
                                                             else if(d==1 || d==2)
                                                             {
                                                                 switch(d)
                                                                 {
                                                                 case 1: //OUi
                                                                     if(mont>=1000)
                                                                     {
                                                                         system("cls");
                                                                         puts("*********************************************************");
                                                                         puts("Felicitation vous avez souscrit au Forfait 50Mo (Dedie Faceboo)\n + 10SMS a 1.000GNF valable 24H");
                                                                         puts("*********************************************************");
                                                                        system("pause");
                                                                         return 0;
                                                                     }
                                                                     else
                                                                     {
                                                                         system("cls");
                                                                         puts("*********************************************************");
                                                                         puts("Votre compte presente un solde insuffisant. ");
                                                                        puts("Veuillez recharger afin d'acheter un nouveau pass. ");
                                                                         puts("*********************************************************");
                                                                         system("pause");
                                                                         return 0;
                                                                     }
                                                                    break;
                                                                 case 2: // Non
                                                                    system("cls");
                                                                     puts("*********************************************************");
                                                                     puts("Achat de pass annule");
                                                                     puts("*********************************************************");
                                                                     system("pause");
                                                                     return 0;
                                                                     break;
                                                                 default:
                                                                    break;
                                                                 }
                                                             }
                                                             else
                                                             {
                                                                 goto AH11;
                                                             }
                                                         }
                                                    break;
                                                case 2: // 150 Mo(Facebook)+15SMS a 2000 GNF
                                                    AH12:
                                                        {
                                                            system("cls");
                                                            puts("*********************************************************");
                                                             puts("Confirmez-vous l'achat du Forfait 150 Mo(Dedie Facebook) + 15SMS \n vers le reseau orange valable 24H?");
                                                             puts("Prix: 2 000 GNF");
                                                             puts("1.Oui");
                                                             puts("2.Non");
                                                             puts("0.Retour achat de pass");
                                                             puts("*********************************************************");

                                                             scanf("%d",&d);

                                                             if(d==0)
                                                             {
                                                                 goto AH1;
                                                             }
                                                             else if(d==1 || d==2)
                                                             {
                                                                 switch(d)
                                                                 {
                                                                 case 1: //OUi
                                                                     if(mont>=2000)
                                                                     {
                                                                         system("cls");
                                                                         puts("*********************************************************");
                                                                         puts("Felicitation vous avez souscrit au Forfait 150 Mo (Dedie Facebook)\n + 15 SMS valable 24H a 2 000 GNF");
                                                                         puts("*********************************************************");
                                                                         system("pause");
                                                                         return 0;
                                                                     }
                                                                     else
                                                                     {
                                                                         system("cls");
                                                                         puts("*********************************************************");
                                                                         puts("Votre compte presente un solde insuffisant. ");
                                                                         puts("Veuillez recharger afin d'acheter un nouveau pass. ");
                                                                         puts("*********************************************************");
                                                                         system("pause");
                                                                         return 0;
                                                                     }
                                                                    break;
                                                                 case 2: // Non
                                                                    system("cls");
                                                                    puts("*********************************************************");
                                                                     puts("Achat de pass annule");
                                                                     puts("*********************************************************");
                                                                     system("pause");
                                                                     return 0;
                                                                     break;
                                                                 default:
                                                                    break;
                                                                 }
                                                             }
                                                             else
                                                             {
                                                                 goto AH12;
                                                             }
                                                         }
                                                    break;
                                                default:
                                                    goto AH1;
                                                    break;
                                                }
                                            }
                                        break;
                                    case 2: // Fa Atongo 72H
                                        AH2:
                                            {
                                                system("cls");
                                                puts("*********************************************************");
                                                puts("1.250 Mo(Facebook&Snapchat)+20SMS a 3000GNF");
                                                puts("2.350 Mo(Facebook&Snapchat)+25SMS a 4000GNF");
                                                puts("*********************************************************");

                                                scanf("%d",&c);

                                                if(c==1 || c==2)
                                                {
                                                    switch(c)
                                                    {
                                                    case 1: // 250 Mo(Facebook&Snapchat)+20SMS a 3000GNF
                                                        AH21:
                                                            {
                                                                system("cls");
                                                                puts("*********************************************************");
                                                                puts("Confirmez-vous l'achat du forfait 250 Mo (Dedie \nfacebook & Snapchat)+20SMS vers le reseau orange valable 72H ?");
                                                                puts("Prix: 3 000 GNF");
                                                                puts("1.Oui");
                                                                puts("2.Non");
                                                                puts("0.Retour achat de pass");
                                                                puts("*********************************************************");

                                                                scanf("%d",&d);

                                                                if(d==1 || d==2)
                                                                {
                                                                    switch(d)
                                                                    {
                                                                    case 1: // Oui
                                                                        if(mont>=3000)
                                                                        {
                                                                            system("cls");
                                                                            puts("*********************************************************");
                                                                            puts("Felicitation vous avez souscrit au forfait 250 Mo (Dedie \nFacebook & Snapchat) + 20 SMS valable 72H a 3 000 GNF ");
                                                                            puts("*********************************************************");
                                                                            system("pause");
                                                                            return 0;
                                                                        }
                                                                        else
                                                                        {
                                                                            system("cls");
                                                                            puts("*********************************************************");
                                                                            puts("Votre compte presente un solde insuffisant. ");
                                                                            puts("Veuillez recharger afin d'acheter un nouveau pass. ");
                                                                            puts("*********************************************************");
                                                                            system("pause");
                                                                            return 0;
                                                                        }
                                                                        break;
                                                                    case 2: // Non
                                                                        system("cls");
                                                                        puts("*********************************************************");
                                                                        puts("Achat de pass annule ");
                                                                        puts("*********************************************************");
                                                                        system("pause");
                                                                        return 0;
                                                                        break;
                                                                    default:
                                                                        break;
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    goto AH21;
                                                                }
                                                            }
                                                        break;
                                                    case 2: // 350 Mo(Facebook&Snapchat)+25SMS a 4000GNF
                                                        AH22:
                                                            {
                                                                system("cls");
                                                                puts("*********************************************************");
                                                                puts("Confirmez-vous l'achat du forfait 350 Mo (\n Dedie facebook & Snapchat)+25SMS vers le reseau orange valable 72H ?");
                                                                puts("Prix: 4 000 GNF");
                                                                puts("1.Oui");
                                                                puts("2.Non");
                                                                puts("0.Retour achat de pass");
                                                                puts("*********************************************************");

                                                                scanf("%d",&d);

                                                                if(d==1 || d==2)
                                                                {
                                                                    switch(d)
                                                                    {
                                                                    case 1: // Oui
                                                                        if(mont>=4000)
                                                                        {
                                                                            system("cls");
                                                                            puts("*********************************************************");
                                                                            puts("Felicitation vous avez souscrit au forfait 350 Mo (Dedie\n facebook & Snapchat) + 25 SMS valable 72h a 4 000 GNF");
                                                                            puts("*********************************************************");
                                                                            system("pause");
                                                                            return 0;
                                                                        }
                                                                        else
                                                                        {
                                                                            system("cls");
                                                                            puts("*********************************************************");
                                                                            puts("Votre compte presente un solde insuffisant. ");
                                                                            puts("Veuillez recharger afin d'acheter un nouveau pass. ");
                                                                            puts("*********************************************************");
                                                                            system("pause");
                                                                            return 0;
                                                                        }
                                                                        break;
                                                                    case 2: // Non
                                                                        system("cls");
                                                                        puts("*********************************************************");
                                                                        puts("Achat de pass annule ");
                                                                        puts("*********************************************************");
                                                                        system("pause");
                                                                        return 0;
                                                                        break;
                                                                    default:
                                                                        break;
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    goto AH22;
                                                                }
                                                            }
                                                        break;
                                                    default:
                                                        break;
                                                    }
                                                }
                                                else
                                                {
                                                    goto AH2;
                                                }
                                            }
                                        break;
                                    case 3: // Consultation
                                            system("cls");
                                            puts("*********************************************************");
                                            puts("Vous n'avez pas un pass valide ");
                                            puts("*********************************************************");
                                            system("pause");
                                            return 0;
                                        break;
                                    default:
                                        break;
                                    }
                                }
                                else
                                {
                                    goto AH;
                                }
                            }
                        break;
                    default : //Vid
                        goto X;
                    }
                }
                else
                    goto X;
            }

    }
    else
    {
        system("cls");
        puts("\n|*********************************************************|");
        printf("Code incorrect veuillez entrez *222# || \n");
        printf("\n|*********************************************************| \n");
    }
    system("pause");
    return 0;
}
