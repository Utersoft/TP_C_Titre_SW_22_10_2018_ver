#include <stdio.h>
#include <stdlib.h>

/*Programme croix_carre
//But : un programme qui affiche une croix et un carr� en laissant l'utilisateur choisir les caract�res et la taille dans le cas de la croix
//mais sans utiliser de tableau ni de chaine de caract�re.
//Entr�e : les caract�res et la taille.
//Sortie : La croix, le carr� et les messages d�di�s � l'utilisateur.*/

int main()
{
    char car1='a', car2='a';
    int i=0, j=0, cpt=0;
    printf("Veuillez entrez un caractere.\n");
    scanf("%c", &car1);
    printf("Veuillez entrez une taille.\n");
    scanf("%i", &cpt);
    //On affecte les variables et demande � l'utilisateur la taille de la croix et le symbole qu'il veut

    for(i=0;i<=cpt;i+=1){
        for(j=0;j<=cpt;j+=1){
            if(i==j){//si i=j on va afficher le caractere �a va repr�senter la premi�re diagonale
                printf("%c", car1);
            }else if(j==cpt-i){
                printf("%c", car1);//celle-ci est pour la deuxi�me diagonal
            }else{
                printf(" ");//Les espaces entres les caract�res pour �viter qu'ils soient coll�s
            }
        }
        printf("\n");//c'est pour �viter de rester sur la m�me ligne dans la console
    }

    printf("Veuillez entrer deux caracteres.\n");
    scanf(" %c", &car1);
    scanf(" %c", &car2);
    for(i=0;i<=4;i++){
        for(j=0;j<=4;j++){
            if((i==0) || (j==4)||(i==4) || (j==0))
                printf("%c", car1);//cette condition permet d'afficher le bord du carr�
            else
                printf("%c", car2);//Celui-ci permet d'afficher l'int�rieur du carr�
        }
        printf("\n");//Le retour � la ligne pour �viter de tout avoir en une ligne
    }
    system("pause");//Pour �viter que le programme ne se referme
    return 0;
}
