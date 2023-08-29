#ifndef EMPLOYEE_H
#define EMPLOYEE_H
struct employee
{
	int eid;
	char ename[20];
	float salary;
	char email[40];
};

typedef struct node
{
	struct employee data;
	struct node *next;
}node;

void Add_emp(node**);
void traverse(node **);
void higherSalary(node **);
void SalaryIncreament(node **);
int delete(int eid, node **);

#endif
