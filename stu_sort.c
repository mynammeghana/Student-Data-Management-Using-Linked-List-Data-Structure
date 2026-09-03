#include"header.h"

void stu_sort(ST *ptr)
{
ST *t=ptr;
char k;
printf("press n/N to sort by name \npress r/R to sort by rollno\npress p/P to sort by percentage\npress e/E to exit\n");
printf("enter the option\n");
scanf(" %c",&k);
if(k>='A' && k<='Z')
k=k+32;
switch(k)
{
case 'n': sort_by_name(ptr); break;
case 'r': sort_by_rollno(ptr); break;
case 'p': sort_by_percentage(ptr); break;
case 'e': break;
default: printf("invalid option\n"); break;
}
}

void sort_by_rollno(ST *ptr)
{
 if(ptr==0)
          {
                 printf("no data foud\n");
                  return ;
          }
       ST *temp=ptr,*last;
          int c=0,i,j;
         while(temp)
       {
                  c++;
                temp=temp->next;
         }
          temp=ptr;
        for(i=0;i<c-1;i++)
          {
                last=temp->next;
                 for(j=0;j<c-1-i;j++)
                 {
                          if(temp->rollno > last->rollno)
                         {
                                 ST t;
                                  t.rollno=temp->rollno;
                                  strcpy(t.name,temp->name);
                                t.percentage = temp->percentage;
 
                               temp->rollno=last->rollno;
                                  strcpy(temp->name,last->name);
                                 temp->percentage = last->percentage;
 
                                 last->rollno=t.rollno;
                                  strcpy(last->name,t.name);
                                 last->percentage = t.percentage;
                      }
                          last=last->next;
                 }
                 temp=temp->next;
}

}


void sort_by_name(ST *ptr)
{
int c=0;	
if(ptr==0)
	{
		printf("no data foud\n");
		return ;
	}
	ST *temp=ptr,*last;
	int i,j;
	while(temp)
	{
		c++;
		temp=temp->next;
	}
	temp=ptr;
	for(i=0;i<c-1;i++)
	{
		last=temp->next;
		for(j=0;j<c-1-i;j++)
		{
			if(strcmp(temp->name,last->name)>0)
			{
				ST t;
				t.rollno=temp->rollno;
				strcpy(t.name,temp->name);
				t.percentage = temp->percentage;

				temp->rollno=last->rollno;
				strcpy(temp->name,last->name);
				temp->percentage = last->percentage;

				last->rollno=t.rollno;
				strcpy(last->name,t.name);
				last->percentage = t.percentage;
			}
                        else if(strcmp(temp->name,last->name)==0)
                        { 
                         if(temp->percentage < last->percentage)
                           {
				ST t;
				t.rollno=temp->rollno;
				strcpy(t.name,temp->name);
				t.percentage = temp->percentage;

				temp->rollno=last->rollno;
				strcpy(temp->name,last->name);
				temp->percentage = last->percentage;

				last->rollno=t.rollno;
				strcpy(last->name,t.name);
				last->percentage = t.percentage;
			}
                        }
			last=last->next;
		}
		temp=temp->next;
	}
}

void sort_by_percentage(ST *ptr)
{
         if(ptr==0)
         {
                 printf("no data foud\n");
                 return ;
         }
       ST *temp=ptr,*last;
         int c=0,i,j;
        while(temp)
       {
                 c++;
                 temp=temp->next;
        }
         temp=ptr;
       for(i=0;i<c-1;i++)
         {
                last=temp->next;
                for(j=0;j<c-1-i;j++)
                 {
                         if(temp->percentage < last->percentage)
                        {
                                ST t;
                                 t.rollno=temp->rollno;
                                 strcpy(t.name,temp->name);
                               t.percentage = temp->percentage;
 
                              temp->rollno=last->rollno;
                                 strcpy(temp->name,last->name);
                                 temp->percentage = last->percentage;
 
                                 last->rollno=t.rollno;
                                 strcpy(last->name,t.name);
                                 last->percentage = t.percentage;
                     }
                         last=last->next;
                 }
                 temp=temp->next;
         }
}

