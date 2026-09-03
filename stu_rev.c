#include"header.h"
 
void stu_rev_link(ST **ptr)
{
	ST *prev=0;
	ST *n=*ptr;
	ST *cur=*ptr;

if(*ptr==0)
{
printf("no data found\n");
return ;
}
	while(cur)
	{
		n=cur->next;
		cur->next=prev;
		prev=cur;
		cur=n;
	}
	*ptr=prev;
}


