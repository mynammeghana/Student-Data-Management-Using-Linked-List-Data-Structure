#include"header.h"

void stu_del(ST **ptr)
{
if(*ptr==0)
{
printf("data ot found\n");
return ;
}
char a;
printf("press r/R to delete by rollno\npress n/N to delete by name\npress e/E to exit\n");
printf("enter ur choice\n");
scanf(" %c",&a);
if(a>='A' && a<='Z')
a=a+32;
switch(a)
{
case 'r': del_by_roll(ptr); break;
case 'n': del_by_name(ptr); break;
case 'e': break;
default : printf("invalid output\n"); break;
}
}

void del_by_roll(ST **ptr)
{
	if(*ptr==0)
	{
		printf("no data found\n");
		return ;
	}
	int roll,k=0;
	printf("enter the rollno to delete\n");
	scanf("%d",&roll);
	ST *del=*ptr,*prev=*ptr,*temp=*ptr;
	while(del)
	{
		if(del->rollno==roll)
		{
			k=1;
			if(del==temp)
			{
				*ptr=del->next;
				del=*ptr;
			}
			else
			{
				prev->next=del->next;
			}
			free(del);
			break;
		}
		else 
		{
			prev=del;
			del=del->next;
		}
	}
		if(k==0)
			printf("rollno NOT FOUND\n");
}



void del_by_name(ST **ptr)
{
	if(*ptr==0)
	{
		printf("no data found\n");
		return ;
	}
	int k=0,c=0;
	char name[90];
	printf("enter the name to delete\n");
	scanf("%s",name);
	ST *temp=*ptr,*del=*ptr,*prev=*ptr;
	while(del)
	{
		if(strcmp(del->name,name)==0)
			c++;
		del=del->next;
	}
	del=*ptr;
	if(c==0)
{		printf("NAME NOT FOUND\n");

return ;
}
	else if(c==1)
	{
		while(del)
		{
			if(strcmp(del->name,name)==0)
			{
				if(del==temp)
				{
					*ptr=del->next;
					del=*ptr;
				}
				else
				{
					prev->next=del->next;
				}
				free(del);
				break;
			}
			else
			{
				prev=del;
				del=del->next;
			}
		}
	}
	else if(c>1)
	{
		while(del)
		{
			if(strcmp(del->name,name)==0)
				printf("%d %s  %f\n",del->rollno,del->name,del->percentage);

			prev=del;
			del=del->next;
		}
	del_by_roll(ptr);
	}
}

