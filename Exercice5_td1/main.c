#include<conio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include <stdio.h>
#include "eight_queen.h"
#include "eight_queen.c"





 
/* Main Function */
int main()
{
    int n;
    printf("\n Entrer Le nombre de reines: ");
    scanf("%d",&n);
    nqueens(n);
    getch();
}

 
