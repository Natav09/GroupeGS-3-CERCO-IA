#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu(){
    int choixmenu;
   printf("MENU\n");
   printf("1-Jouer\n");
   printf("2-Regle de jeu\n");
   printf("3-Plus grand score\n");
   printf("0-Quitter\n");
   scanf("%d",&choixmenu);
   switch(choixmenu){
    case 1:
        sousmenu1();
        break;
    case 2:
        break;
    case 3:
        break;
    case 0:
        break;
    default:
        break;
   }
   return choixmenu;
}
void sousmenu1(){
    int choixsousmenu1;
    printf("1-1 joueur\n");
    printf("2-2 joueur\n");
    scanf("%d",&choixsousmenu1);
    switch(choixsousmenu1){
    case 1:
        sousmenu2();
        break;
    case 2:
        sousmenu3();
        break;
    }
}
void sousmenu2(){
    int choixsousmenu2, nombre_mystere,nombre,max;
    const int MIN = 1;
    int compteur =0;
    int score[1]={0};
    while(choixsousmenu2 < 1 || choixsousmenu2 > 3){
        printf("1- Niveau 1: 1-100\n");
        printf("2- Niveau 2: 1-1000\n");
        printf("3- Niveau 3: 1-10000\n");
        scanf("%d",&choixsousmenu2);
    }

    switch(choixsousmenu2){
        case 1:
            max=100;
            nombre_mystere = (rand()%(max-MIN+1))+MIN;
            do{
                    compteur++;
                do{
                    printf("Choisir un nombre compris entre 1 et 100\n");
                    scanf("%d",&nombre);
                }while(nombre < 1 || nombre > 100);
                if (nombre > nombre_mystere){
                    printf("Votre nombre est plus grand\n");
                }
                else if(nombre < nombre_mystere){
                    printf("Votre nombre est plus petit\n");
                }
                else {
                    printf("Bravo vous avez reussi en %d coups\n",compteur);
                }
            }while(nombre != nombre_mystere);

                    score[0] = compteur;
                    printf("Vous avez le meilleur score\n");
            break;
        case 2:
            max=1000;
            compteur=0;
            nombre_mystere = (rand()%(max-MIN+1))+MIN;
            do{
                compteur++;
                do{
                    printf("Choisir un nombre compris entre 1 et 1000\n");
                    scanf("%d",&nombre);
                }while(nombre < 1 || nombre > 1000);
                if (nombre < nombre_mystere){
                    printf("Votre nombre est plus petit\n");
                }
                else if(nombre > nombre_mystere){
                    printf("Votre nombre est plus grand\n");
                }
                else {
                    printf("Bravo vous avez reussi en %d coups\n",compteur);
                }
            }while(nombre != nombre_mystere);
             if(compteur < score[0]){
                    score[0]=compteur;
                    printf("Vous avez le meilleur score\n");
                }
            break;
        case 3:
            max=10000;
            compteur=0;
            nombre_mystere = (rand()%(max-MIN+1))+MIN;
            do{
                compteur++;
                do{
                    printf("Choisir un nombre compris entre 1 et 10000\n");
                    scanf("%d",&nombre);
                }while(nombre < 1 || nombre > 10000);
                if (nombre < nombre_mystere){
                    printf("Votre nombre est plus petit\n");
                }
                else if(nombre > nombre_mystere){
                    printf("Votre nombre est plus grand\n");
                }
                else {
                    printf("Bravo vous avez reussi en %d coups\n",compteur);
                }
            }while(nombre != nombre_mystere);
             if(compteur < score[0]){
                    score[0]=compteur;
                    printf("Vous avez le meilleur score\n");
                }
            break;
        default:
            break;
    }
}
void sousmenu3 (){
    int choixsousmenu3, nombre_mystere2, nombre_mystere1,nombre,max;
    const int MIN = 1;
    int compteur =0;
    int score2[1]={0};
    while(choixsousmenu3 < 1 || choixsousmenu3 > 3){
        printf("1- Niveau 1: 1-100\n");
        printf("2- Niveau 2: 1-1000\n");
        printf("3- Niveau 3: 1-10000\n");
        scanf("%d",&choixsousmenu3);
    }

    switch(choixsousmenu3){
        case 1:
            max=100;
            nombre_mystere1 = (rand()%(max-MIN+1))+MIN;
            printf("Joueur 1");
            do{
                    compteur++;
                do{
                    printf("Choisir un nombre compris entre 1 et 100\n");
                    scanf("%d",&nombre);
                }while(nombre < 1 || nombre > 100);
                if (nombre < nombre_mystere1){
                    printf("Votre nombre est plus petit\n");
                }
                else if(nombre > nombre_mystere1){
                    printf("Votre nombre est plus grand\n");
                }
                else {
                    printf("Bravo vous avez reussi en %d coups\n",compteur);
                }
            }while(nombre != nombre_mystere1);

                    score2[0]=compteur;
                    printf("Vous avez le plus grand score");
            compteur=0;
            nombre_mystere2 = (rand()%(max-MIN+1))+MIN;
            printf("Joueur 2");
            do{
                compteur++;
                do{
                    printf("Choisir un nombre compris entre 1 et 100\n");
                    scanf("%d",&nombre);
                }while(nombre < 1 || nombre > 100);
                if (nombre < nombre_mystere2){
                    printf("Votre nombre est plus petit\n");
                }
                else if(nombre > nombre_mystere2){
                    printf("Votre nombre est plus grand\n");
                }
                else {
                    printf("Bravo vous avez reussi en %d coups\n",compteur);
                }
            }while(nombre != nombre_mystere2);
             if(compteur < score2[0]){
                    score2[0]=compteur;
                     printf("Vous avez le plus grand score");
                }
            break;
        case 2:
            max=1000;
            compteur=0;
            nombre_mystere1 = (rand()%(max-MIN+1))+MIN;
            printf("Joueur 1");
            do{
                    compteur++;
                do{
                    printf("Choisir un nombre compris entre 1 et 1000\n");
                    scanf("%d",&nombre);
                }while(nombre < 1 || nombre > 1000);
                if (nombre < nombre_mystere1){
                    printf("Votre nombre est plus petit\n");
                }
                else if(nombre > nombre_mystere1){
                    printf("Votre nombre est plus grand\n");
                }
                else {
                    printf("Bravo vous avez reussi en %d coups\n",compteur);
                }
            }while(nombre != nombre_mystere1);
             if(compteur < score2[0]){
                    score2[0]=compteur;
                     printf("Vous avez le plus grand score");
                }
            compteur = 0;
            nombre_mystere2 = (rand()%(max-MIN+1))+MIN;
            printf("Joueur 2");
            do{
                    compteur++;
                do{
                    printf("Choisir un nombre compris entre 1 et 1000\n");
                    scanf("%d",&nombre);
                }while(nombre < 1 || nombre > 1000);
                if (nombre < nombre_mystere2){
                    printf("Votre nombre est plus petit\n");
                }
                else if(nombre > nombre_mystere2){
                    printf("Votre nombre est plus grand\n");
                }
                else {
                    printf("Bravo vous avez reussi en %d coups\n",compteur);
                }
            }while(nombre != nombre_mystere2);
             if(compteur < score2[0]){
                    score2[0]=compteur;
                     printf("Vous avez le plus grand score");
                }
            break;
        case 3:
            max=10000;
            compteur =0;
            nombre_mystere1 = (rand()%(max-MIN+1))+MIN;
            nombre_mystere2 = (rand()%(max-MIN+1))+MIN;
            printf("Joueur 1");
            do{
                    compteur++;
                do{
                    printf("Choisir un nombre compris entre 1 et 10000\n");
                    scanf("%d",&nombre);
                }while(nombre < 1 || nombre > 10000);
                if (nombre < nombre_mystere1){
                    printf("Votre nombre est plus petit\n");
                }
                else if(nombre > nombre_mystere1){
                    printf("Votre nombre est plus grand\n");
                }
                else {
                    printf("Bravo vous avez reussi en %d coups\n",compteur);
                }
            }while(nombre != nombre_mystere1);
             if(compteur < score2[0]){
                    score2[0]=compteur;
                     printf("Vous avez le plus grand score");
                }
            compteur=0;
            printf("Joueur 2");
            do{
                    compteur++;
                 do{
                    printf("Choisir un nombre compris entre 1 et 10000\n");
                    scanf("%d",&nombre);
                }while(nombre < 1 || nombre > 10000);
                if (nombre < nombre_mystere2){
                    printf("Votre nombre est plus petit\n");
                }
                else if(nombre > nombre_mystere2){
                    printf("Votre nombre est plus grand\n");
                }
                else {
                    printf("Bravo vous avez reussi en %d coups\n",compteur);
                }
            }while(nombre != nombre_mystere2);
             if(compteur < score2[0]){
                    score2[0]=compteur;
                     printf("Vous avez le plus grand score");
                }
            break;
        default:
            break;
    }
}
int main(int argc, char *argv[])
{
    printf("***JEU PLUS OU MOINS***");
    srand(time(NULL));
    int reprendre =1;
    while( reprendre == 1 ){
      menu();
      printf("Voulez-vous reprendre ? \n 1-POUR OUI\n");
      scanf("%d",&reprendre);
    }

   return 0;
}
