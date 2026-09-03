#include"header.h"

void stu_save(ST *ptr,char *s)
{
FILE *fp=fopen(s,"w");
ST *temp=ptr;
if(ptr==0)
{
printf("no data foound\n");
return ;
}
while(temp)
{
fprintf(fp,"%d  %s  %.2f\n",temp->rollno,temp->name,temp->percentage);
temp=temp->next;
}
printf("DATA SAVED SUCCESSFULLY\n");
}

