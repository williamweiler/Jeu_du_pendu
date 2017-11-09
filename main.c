#include <stdio.h>
#include <stdlib.h>
#define TAILLE 255


int main()
{
char strNom[TAILLE];
char strPrenom[TAILLE];
char motsecret[TAILLE];
char car;
int essai,i,test;
    essai = 10;
    i=0;
    test=0;

     printf("Bienvenue dans ma version du Pendu !\n\n");
    puts("veuillez saisir votre nom :\n");//initialisation du nom
    gets(strNom);
    puts("veuillez saisir votre prenom :\n");//et du prenom
    gets(strPrenom);
    printf("Nom %s\n",strNom);
    printf("Prenom %s\n",strPrenom);
    printf("vous disposez de : %d chance\n",essai);

    printf("\n Entrez un mot a deviner\n\n" );
    scanf("%s",motsecret);
    motsecret[strlen(motsecret)]='\0';//annonce la fin chaine
    fflush(stdin);
        do{

            fflush(stdin);
            printf("\nEntrez une lettre pour essayer de deviner le mot :\n" );
            scanf("%c",&car);


        for(i=0;i<=strlen(motsecret-1);i++){
            if (car==motsecret[i])//si mon caractere est identique au [i] a mon mot secret alors le joueur ne perd pas de point
                test=1;


        }
                if (test==1)
                {//si le car est bon alors on laisse les chance du joueur a son niveau actuelle
                    printf(" bien jouer vous avez trouver une lettre\n ");
                    printf(" il vous reste chance : %d\n",essai);
                }
                else
                {//si le car n'est pas bon alors on retir une chance au joueur
                    essai = essai-1;
                    printf("vous n'avez pas trouver de lettre \n ");
                    printf("il vous reste chance :%d \n",essai);

                }


            test=0;

         }while (essai>0);//boucle while qui permet de recommencer le tour temps que le joueur as encore des points
        printf("desoler vous avez perdu\n");

    system("pause");
    return 0;
}
