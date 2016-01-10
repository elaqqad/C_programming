#include <stdio.h>
#define SET(n,i) (n|(1<<i))
#define RESET(n,i) (n&(~(1<<i)))
#define BIT(n,i) (n &(1<<i))
#define MASK (1+(1<<2))



main()
{   
     char n=123;
     for(int i=0;i<8;i++) printf("bit(%d,%d)!=0  vaut %d\n",n,i,BIT(n,7-i)!=0);
     printf("%d aprés RESET(%d,4):%d\n",n,n,BIT(RESET(n,4),4));
     printf("Le MASK vaut %d",MASK);
     
      }
