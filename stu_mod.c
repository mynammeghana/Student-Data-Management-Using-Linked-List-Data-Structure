#include"header.h"

void stu_mod(ST *ptr)
{
char op;
printf("press r/R to search for rollno\npress n/N to search by name\npress p/P to search by percentage\n");
printf("enter ur option\n");
scanf(" %c",&op);
if(op>='A' && op<='Z')
op=op+32;
switch(op)
{
case 'r':sea_by_rollno(ptr); break;
case 'n':sea_by_name(ptr); break;
case 'p':sea_by_percentage(ptr);break;
case 'e':break;
default:printf("invalid option\n");
}
}

void sea_by_rollno(ST *ptr)
{
	if(ptr==0)
	{
		printf("no data found\n");
		return ;
	}
	int roll,k=0;
	ST *sea=ptr,*prev=ptr,*t=ptr;
	printf("enter the roll no to search\n");
	scanf("%d",&roll);
	while(sea)
	{
		if(sea->rollno==roll)
			k=1;
		sea=sea->next;
	}
	if(k==0)
	{	
printf("ROLLNO NOT FOUND\n");
return ;
}
	sea=ptr;

	while(sea)
	{
		if(sea->rollno==roll)
		{
			char s[90];
			float f;
			printf("enter the name and precentaeg to change\n");
			scanf("%s%f",s,&f);
			strcpy(sea->name,s);
			sea->percentage=f;
		}
		sea=sea->next;
	}
}

void sea_by_name(ST *ptr)
{
	if(ptr==0)
	{
		printf("no data found\n");
		return ;
	}
	int k=0,c=0;
	char name[90];
	printf("enter the name to delete\n");
	scanf("%s",name);
	ST *sea=ptr,*prev=ptr,*t=ptr;
	while(sea)
	{
		if(strcmp(sea->name,name)==0)
			c++;
		sea=sea->next;
	}
	sea=ptr;
	if(c==0)
	{          printf("NAME NOT FOUND\n");

		return ;
	}
	else if(c==1)
	{
		while(sea)
		{
			if(strcmp(sea->name,name)==0)
			{
				char s[90];
				float f;
				printf("enter the name and precentaeg to change\n");
				scanf("%s%f",s,&f);
				strcpy(s,sea->name);
				sea->percentage=f;
			}
			sea=sea->next;
		}
	}
	else if(c>1)
	{
		while(sea)
		{
			if(strcmp(sea->name,name)==0)
				printf("%d %s  %f\n",sea->rollno,sea->name,sea->percentage);
			sea=sea->next;
		}
	}
	sea_by_rollno(ptr);
}




void sea_by_percentage(ST *ptr)
{
	if(ptr==0)
	{
		printf("no data found\n");
		return ;
	}
	int k=0,c=0;
	float f;
	printf("enter the perce to delete\n");
	scanf("%f",&f);
	ST *sea=ptr,*prev=ptr,*t=ptr;
	while(sea)
	{
		if(sea->percentage == f)
			c++;
		sea=sea->next;
	}
	sea=ptr;
	if(c==0)
	{          printf("NAME NOT FOUND\n");

		return ;
	}
	else if(c==1)
	{
		while(sea)
			if(sea->percentage == f)
			{
				char s[90];
				float f;
				printf("enter the name and precentaeg to change\n");
				scanf("%s%f",s,&f);
				strcpy(s,sea->name);
				sea->percentage=f;
			}
		sea=sea->next;
	}

	else if(c>1)
	{
		while(sea)
		{
			if(sea->percentage == f)
				printf("%d %s  %.2f\n",sea->rollno,sea->name,sea->percentage);
			sea=sea->next;
		}
	}
	sea_by_rollno(ptr);
}


