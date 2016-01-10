typedef struct LIST{
        int value;
        struct LIST* next; 
        }LIST;
LIST *empty_list();
LIST *insert(LIST*,int);
void print_list(LIST*);        
