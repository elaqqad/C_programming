#include "list.h"
#include "list.c"
#include <stdio.h>


int main(int argc, char ** argv){
    LIST *l=empty_list();
    l=insert(l,1);
    l=insert(l,11);
    l=insert(l,2);
    l=insert(l,12);
    l=insert(l,3);
    l=insert(l,13);
    
    print_list(l);
}
