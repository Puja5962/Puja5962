#include<stdio.h>
#include<malloc.h>
#include"emp.h"
int delete(int eid, node **start)
{
	node*p,*pre;
	
	p =*start;
	if(*start)
	{
		if(p->data.eid == eid)
		{
			*start = p->next;
			free(p);
			return 1;
		}
		else
		{
			while(p)
			{
				if(p->data.eid == eid)
				{
					pre->next = p->next;
					free(p);
					return 1;
				}
				else
				{
					pre = p;
					p = p->next;
				}
			}
			printf("Empolyee id not found\n");
			return 0;
		}
	}
	else
	printf("List is empty, deletion not possible\n");
	return 0;					
}
