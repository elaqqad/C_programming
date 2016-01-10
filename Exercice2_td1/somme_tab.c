#include "somme_tab.h"
#include<stdio.h>
#include<stdlib.h>

char* somme(char* ch1,char* ch2, int n){
      char* new_ch=(char *)malloc(n*sizeof(char));
      int i;
     for(i=0;i<n;i++){
        *(new_ch+i)=*(ch1+i)* (*(ch2+i));
        }
      return new_ch;
      }
      
void print_tableau(char* ch,int n){
     int i;
     for(i=0;i<n;i++){
        printf("%d\t",*(ch+i));
        }
        printf("\n");
     }     
