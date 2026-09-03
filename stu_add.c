#include"header.h"

//int rollno;
//char name[50];
//float percentage;
//struct student *next;
//static int i=1;
void stu_add(ST **ptr)
{       
	int i=1;
        ST *new,*temp=*ptr,*pos;
	new=malloc(sizeof(ST));
l1:	new->rollno=i++;
        temp=*ptr;
	while(temp)   	
	{ 
		if(temp->rollno == new->rollno)
			goto l1;
		temp=temp->next;
	}
l:	printf("enter the details\n");
	scanf("%s%f",new->name,&new->percentage);
	if(new->percentage >=0 && 100 <= new->percentage )
	{
		printf("percentage not in range \n TRY AGAIN\n");
		goto l;
	}
	temp=*ptr;
	if(*ptr==0)
	{
		new->next=*ptr;
		*ptr=new;
	}
	else
        {
           pos=*ptr;
          while((pos->next!=0) &&(new->rollno > pos->next->rollno))
           pos=pos->next;
       new->next=pos->next;
       pos->next=new;
        }  
/*	{
		while(temp->next!=0)
		{   
			temp=temp->next;
		}
		temp->next=new;
		new->next=0;
	}*/
}


