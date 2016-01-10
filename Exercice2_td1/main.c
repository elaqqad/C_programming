#include "somme_tab.h"
#include "somme_tab.c"
#include <stdio.h>


int main(int argc, char ** argv){
       int n=7;
       char ch1[]={1,2,3,4,5,6,7};
       char ch2[]={2,2,2,2,2,2,2};
       printf("le premier tableau est:\n\t");
       print_tableau(ch1,n);
       printf("le deuxième tableau est:\n\t");
       print_tableau(ch2,n);
       printf("la somme desdeux tablaux est :\n\t");
       print_tableau(somme(ch1,ch2,n),n);
       return 0;
       
       }
