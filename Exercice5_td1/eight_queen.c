// determiner si la reine (i,config[i]) attaque la case (k,config[k])
int attac(int* config ,int k,int i){
    return config[i]==config[k]||i-config[i]==k-config[k]||i+config[i]==k+config[k];
} 


// cette fonction test la case (k,config[k])s'elle est non attaquee (libre) dans la configuration config
// par des reines placees dans les lignes precedentes
int safetoplace(int* config,int k)
{   int i; // pour parcourir les lignes précedentes
    for(i=1;i<k;i++)
    {
        if(attac(config,k,i))
        {
            return 0;  
        }
    }
    return 1;
}



/* For printing the Queens and Placing them in Grid */
void nqueens(int n)
{
    int config[20];// tableau contenant une configuration
    int count=0;
    int k=1;// represente la ligne dans laquelle s'effectue les calcules
 
    config[k]=0;
 
    while(k!=0)
    {
        // Dans la ligne k on cherche le config[k] suivant qui est sur
        config[k]=config[k]+1;
        while((config[k]<=n)&&(!safetoplace(config,k)))
        {
 
            config[k]=config[k]+1;
        }
        
        if(config[k]<=n)
        {
            if(k==n)
            {   // On a obtenu une solution complete on l'affiche
                count++;
                printf("\n\t Configuration %d  is : \n\n\n",count);
                print_grid(n,config);
                getch();
 
            }
            else
            {
                k++;// le nombre de reine placees est encore < n donc onpasse a la ligne suivante
                config[k]=0;
                 }
        }
        else
        {
            k--;// il n y a pas de case libre donc on repasse à ligne precedente pour reessayer  une
                // autre proposition dans la ligne precedente .
        }
    }
    return;
}


// affichage
void print_grid(int n,int* config)
{
    char arr[20][20];// le reseau
    int i,j;
    // remplissement de reseau par des .
    for(i=1;i<=n;i++)
    {
        for(j=1; j<=n; j++)
        {
            arr[i][j]='.';
        }
    }
   //remplacement des positions des reines 
    for(i=1;i<=n;i++)
    {
        arr[i][config[i]]='°';
    }
 
    for( i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("\t%c",arr[i][j]);
        }
            printf("\n");
    }
 
}

