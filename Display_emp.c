#include<stdio.h>
#include"emp.h"
void traverse(node **start)
{
	node * p;
	p = *start;
	printf("\nEmployee Details\n");
	while(p)
	{
		printf("Emp Id: %d\n",p->data.eid);
		printf("Salary: %f\n",p->data.salary);
		printf("Emp Name: %s\n",p->data.ename);
		printf("Email:%s\n\n",p->data.email);
		p = p->next;
	}
	printf("NULL\n");
}

