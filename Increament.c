#include<stdio.h>
#include"emp.h"
void SalaryIncreament(node **start)
{
	node * p;
	p = *start;
	if(*start == NULL)
	{
		printf("List id empty.\n");
	}
	while(p)
	{
		if(p->data.salary<20000)
		{
			p->data.salary += (p->data.salary)*10/100;
		}
		p = p->next;
	}
}
