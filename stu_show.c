#include"header.h"

void stu_show(ST *ptr)
{
	if(ptr==0)
	{
		printf("no records found\n");
		return ;
	}
	printf("--------------------------------------------------------------\n");
	printf("ROLLNO   NAME              PERCENTAGE\n");
	printf("--------------------------------------------------------------\n");
	ST *temp=ptr;
	while(temp)
	{
		printf("--------------------------------------------------------------\n");
		printf("%d       %s	   %.2f\n",temp->rollno,temp->name,temp->percentage);
		printf("--------------------------------------------------------------\n");
		temp=temp->next;
	}
}

