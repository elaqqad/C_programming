#include <stdio.h>
#include <stdlib.h>
#include"matrix.h"
#include"matrix.c"

int main(int argc, char ** argv){
    // declarations des matrices
    Matrix *mat1=empty_matrix(2,3);
    Matrix *mat2=empty_matrix(2,3);
    Matrix *mat3=empty_matrix(3,3);
    int i,j ;
    
    // remplissement des matrices
    for( i=0;i<mat1->row;i++){
         for( j=0;j<mat1->column;j++){
              mat1->num[i][j]=(3-i)*j;
              }
         }
    
    for( i=0;i<mat2->row;i++){
         for( j=0;j<mat2->column;j++){
              mat2->num[i][j]=9-i+2*j;
              } 
         }           
    for( i=0;i<mat3->row;i++){
         for( j=0;j<mat3->column;j++){
              mat3->num[i][j]=9-i+2*j;
              } 
         }
    
    // affichage des matrices :
    printf("la premiere matrice: mat1");
    print_matrix(mat1);    
    printf("la deuxieme matrice: mat2");
    print_matrix(mat2);    
    printf("la troisieme matrice: mat3");
    print_matrix(mat3); 
    // affichage des operations sur ces matrices  
    printf("la matrice: mat1+mat2");
    print_matrix(sum(mat1,mat2));    
    printf("la matrice: mat1*mat3");
    print_matrix(product(mat1,mat3));    
    printf("la matrice: mat3*mat3");
    print_matrix(product(mat3,mat3));
 
    return 0;
}
