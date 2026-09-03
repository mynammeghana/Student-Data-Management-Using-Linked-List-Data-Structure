#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
int rollno;
char name[50];
float percentage;
struct student *next;
};

typedef struct student ST;

 
void stu_add(ST **ptr);
void stu_del(ST **ptr);
void stu_mod(ST *ptr);
void stu_show(ST *ptr);
void stu_save(ST *ptr,char *s);
void delete_all(ST **ptr);
void stu_sort(ST *ptr);
void stu_rev_link(ST **ptr);
void stu_read_file(ST **ptr,char *s);

void sort_by_name(ST *ptr);
void sort_by_percentage(ST *ptr);
void sort_by_rollno(ST *ptr);
 
void del_by_roll(ST **ptr); 
void del_by_name(ST **ptr);

void sea_by_rollno(ST *ptr); 
void sea_by_name(ST *ptr);
void sea_by_percentage(ST *ptr);

