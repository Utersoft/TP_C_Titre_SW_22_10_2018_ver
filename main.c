#include <stdio.h>
#include <stdlib.h>

/*Programme croix_carre
//But : un programme qui affiche une croix et un carré en laissant l'utilisateur choisir les caractères et la taille dans le cas de la croix
//mais sans utiliser de tableau ni de chaine de caractère.
//Entrée : les caractères et la taille.
//Sortie : La croix, le carré et les messages dédiés à l'utilisateur.*/

int main()
{
    char car1='a', car2='a';
    int i=0, j=0, cpt=0;
    printf("Veuillez entrez un caractere.\n");
    scanf("%c", &car1);
    printf("Veuillez entrez une taille.\n");
    scanf("%i", &cpt);
    //On affecte les variables et demande à l'utilisateur la taille de la croix et le symbole qu'il veut

    for(i=0;i<=cpt;i+=1){
        for(j=0;j<=cpt;j+=1){
            if(i==j){//si i=j on va afficher le caractere ça va représenter la première diagonale
                printf("%c", car1);
            }else if(j==cpt-i){
                printf("%c", car1);//celle-ci est pour la deuxième diagonal
            }else{
                printf(" ");//Les espaces entres les caractères pour éviter qu'ils soient collés
            }
        }
        printf("\n");//c'est pour éviter de rester sur la même ligne dans la console
    }

    printf("Veuillez entrer deux caracteres.\n");
    scanf(" %c", &car1);
    scanf(" %c", &car2);
    for(i=0;i<=4;i++){
        for(j=0;j<=4;j++){
            if((i==0) || (j==4)||(i==4) || (j==0))
                printf("%c", car1);//cette condition permet d'afficher le bord du carré
            else
                printf("%c", car2);//Celui-ci permet d'afficher l'intérieur du carré
        }
        printf("\n");//Le retour à la ligne pour éviter de tout avoir en une ligne
    }
    system("pause");//Pour éviter que le programme ne se referme
    return 0;
}
