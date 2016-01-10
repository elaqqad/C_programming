#include <stdio.h>

int main(int argc, char ** argv){
       int n; 
       int i;// compteur 
       int temp;// variable temporaire pour lecalcul
       int a=0;// le premier element de la suite de Fibonacci
       int b=1;// le deuxieme elemnet de la suite 
       printf("donner un entier :");
       scanf("%d",&n); // la saisie d'unentier auclavier
       /* labouclede calcul*/
       for(i=0;i<n;i++){
                        temp=a;
                        a=b;
                        b=temp+b;
                        }
       
       // affichage du résultat
       printf("le %d ieme nombre de Fibonacci est: %d\n",n,a);
       return 0;
       }
