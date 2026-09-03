#include"header.h"
int main(int argc,char **argv)
{
        if(argc!=2)
        {
                printf("usage: ./a.out file....\n");
                        return 1;
        }
       char s[90],e;
    strcpy(s,argv[1]);
        ST *head=0;
        while(1)
        {
                printf("\npress a/A to add_data\npress b/B to del_node\npress c/C to save\npress d/D to sort_data\npress e/E to reverse_link\npress f/F to show_data\npress g/G to delete_all\npress h/H to modify data \npress i to exit\n");
                char op;
                printf("enter the option\n");
                scanf(" %c",&op);
                if(op>='A' && op<='Z')
                op=op+32;
                switch(op)
                {
                        case 'a': stu_add(&head); break;
                        case 'b': stu_del(&head); break;
                        case 'c': stu_save(head,s); break;
                        case 'd': stu_sort(head); break;
                        case 'e': stu_rev_link(&head); break;
                        case 'f': stu_show(head); break;
                        case 'g': delete_all(&head); break;
                        case 'h': stu_mod(head); break;
                        case 'i': printf("press s/S to save and quit \npress e/E without saving\n");
printf("enter the option\n");
scanf(" %c",&e);
if(e>='A' && e<='Z')
e=e+32;
switch(e)
{
case 's': stu_save(head,s); delete_all(&head); exit(0);
case 'e': delete_all(&head); exit(0);
default : printf("invalid option\n");
}
                        default: printf("invalid option \n");
                }
        }
}

