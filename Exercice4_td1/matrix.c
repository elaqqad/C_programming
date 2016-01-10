
Matrix *empty_matrix(int n,int m){
     int i;
     Matrix* mat=malloc(sizeof(Matrix));
     mat->num=malloc(n*sizeof(int*));
     for( i=0;i<n;i++){
          mat->num[i]=malloc(m*sizeof(int));
          }
     mat->row=n;
     mat->column=m;
     return mat;
     }

Matrix* sum(Matrix* mat1,Matrix* mat2){
        if(mat1->row!=mat2->row || mat1->column!=mat2->column){
                                printf("conflicts in dimensions of matrices!!!");
                                exit;// On peut pas calculer la somme et on doit returner 
                                     //une matrices, la seule solution est de quiter 
                                }
        Matrix *mat=empty_matrix(mat1->row,mat1->column);
        int i,j;
        for( i=0;i<mat->row;i++){
               for( j=0;j<mat->column;j++){
                    mat->num[i][j]=mat1->num[i][j]+mat2->num[i][j];
                    }
               }
        return mat;

        }
Matrix* product(Matrix* mat1,Matrix* mat2){
        if(mat1->column!=mat2->row){
                                printf("conflicts in dimensions of matrices!!!");
                                exit;// On peut pas calculer le produit et on doit returner 
                                     //une matrices, la seule solution est de quiter 
                                }
        Matrix *mat=empty_matrix(mat1->row,mat2->column);
        int i,j,k;
        int temp;
        for( i=0;i<mat->row;i++){
               for( j=0;j<mat->column;j++){
                    temp=0;
                    for( k=0;k<mat1->column;k++){temp+=mat1->num[i][k]*mat2->num[k][j];}
                    mat->num[i][j]=temp;
                    }
               }

         return mat;
        }
void print_matrix(Matrix* mat){
        int i,j;
        printf("\n");
        for( i=0;i<mat->row;i++){
               printf("\t\t");
               for( j=0;j<mat->column;j++){
                    printf("%d\t",mat->num[i][j]);
                    }
               printf("\n\n");
               }
       }

