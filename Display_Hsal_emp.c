#include<stdio.h>
#include"emp.h"
void higherSalary(node **start)
{
	node * p;
	p = *start;
	while(p)
	{
		if(p->data.salary>25000)
		{
			//printf("\nEmployee Details\n");
			printf("Emp Id: %d\n",p->data.eid);
			printf("Salary: %f\n",p->data.salary);
			printf("Emp Name: %s\n",p->data.ename);
			printf("Email:%s\n\n",p->data.email);
		}
		p = p->next;
	}
		printf("NULL\n");
}
