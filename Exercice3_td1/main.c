#include<stdio.h>
#include"compare_chaine.h"
#include"compare_chaine.c"




int main(int argc, char ** argv){
    char ch1[]="";
    char ch2[]="moi";
    char ch3[]="mois";
    char ch4[]="depinfo";
    char ch5[]="depim";
    
    
    printf(" La regle de comparaison:comp(x,y) =-1 si x<y 0 si x=y 1 sinon \n\n");
    
    printf("comp(%s,%s)\t\t donne :%d \n",ch1,ch2,comp(ch1,ch2));
    printf("comp(%s,%s)\t\t donne :%d \n",ch2,ch3,comp(ch2,ch3));
    printf("comp(%s,%s)\t donne :%d \n",ch3,ch4,comp(ch3,ch4));
    printf("comp(%s,%s)\t donne :%d \n",ch4,ch5,comp(ch4,ch5));
    printf("comp(%s,%s)\t donne :%d \n",ch1,ch1,comp(ch1,ch1));
    printf("comp(%s,%s)\t donne :%d \n",ch4,ch4,comp(ch4,ch4));
       
}






