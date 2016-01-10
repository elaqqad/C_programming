int mylen(char* ch){
    int i=0;
    while(*(ch+i)!='\0'){
                     i=i+1;
                     }
    return i; 
    }
    
int comp(char * ch1 ,char * ch2){
    int n=mylen(ch1);
    int m=mylen(ch2);
    int i;
    char car1,car2;
    for (i=0;i<n;i++){
        car1=*(ch1+i);
        if (i>=m) {return 1;}
        car2=*(ch2+i);    
        
        if ((int)car1<(int)car2){return -1;}
        if ((int)car1>(int)car2){return 1;}                                            
        }
    if (n==m ) return 0;
    return -1;   
}
