#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include"emp.h"

void clean_up(node**start)
{
        node *p,*p1;
        p = *start;
	while(p != NULL)
	{
		p1 = p;
		p = p->next;
		free(p1);
	}
}

int main()
{
	int choice = 0,i;
	node* start = NULL;
	
	menu:
	printf("choose one of the options:\n1. Add Employee\n2. Display details\n3. Employees having salary greater than 25000\n4. Salary Increament by 10 percent\n5. Delete employee details\n6. exit\n"); 
	scanf("%d",&choice);

 	switch(choice)
		{
		
			case 1: Add_emp(&start);
				goto menu;
			case 2: traverse(&start);
				goto menu;
			case 3: higherSalary(&start);
				goto menu;
			case 4: SalaryIncreament(&start);
				goto menu;
			case 5: printf("Enter the Empolyee id\n");
				scanf("%d", &i);
				delete(i, &start);
				//printf("return %d\n",x);
				goto menu; 
			case 6: clean_up(&start);
				break;
			default:
				printf("Invalid choice\n");
				goto menu;
		}
	
}
