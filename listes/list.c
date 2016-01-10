#include<stdio.h>


LIST *empty_list(){
     return NULL;
     }
LIST *insert(LIST* list , int value){
     LIST *new_list=malloc(sizeof(LIST));
     new_list->value=value;
     new_list->next=list;
     return  new_list;
     }

void print_list(LIST * list){
     printf("\t");
     while (list!=NULL){
           printf("%d\t",list->value);
           list=list->next;
           }
     printf("\n");
     }
