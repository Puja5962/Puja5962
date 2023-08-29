#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include"emp.h"
void Add_emp(node **start)
{
	char name[20],email[40];
	node* temp;
	node* p;
	p = *start;
	temp = malloc(sizeof(node));
	if(temp)
	{
		struct employee e;
		printf("Enter the Employee id\n");
		scanf("%d",&e.eid);
		printf("Enter the Employee name\n");
		scanf("%s",name);
		strcpy(e.ename,name);
		printf("Enter the Employee salary\n");
		scanf("%f",&e.salary);
		printf("Enter the Employee email\n");
		scanf("%s",email);
		strcpy(e.email,email);
			
		temp->data.eid = e.eid;
		strcpy(temp->data.ename,e.ename);
		strcpy(temp->data.email,e.email);
		temp->data.salary = e.salary;
		temp->next = NULL;
		if(*start == NULL)
		{
			*start=temp;
		}	
		else
		{
			while(p->next != NULL)
			{
				p=p->next;
			}
			p->next = temp;
		}
	}
	else
		printf("Memory allocation failed\n");	
}
