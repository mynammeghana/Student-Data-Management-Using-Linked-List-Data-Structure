#include"header.h"

void delete_all(ST **ptr)
{
 int k=1;
        ST *del=*ptr;
        while(del)
        {
                *ptr=del->next;
                free(del);
             printf("deleted node %d successfully\n",k++);
                del=*ptr;
        }
}

