#include<stdio.h>
#include<stdlib.h>
#include "Server.h"
int read(emp **e)
{
    int n,i;
    printf("Enter the number of employees");
    scanf("%d",&n);
    *e=(emp*)malloc(n*sizeof(emp));
    if(*e==NULL)
    {
        printf("Memory not allocated");
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter employee id");
        scanf("%s",(*e+i)->emp_id);
        printf("Enter employee name");
        scanf("%s",(*e+i)->name);
        printf("Enter department");
        scanf("%s",(*e+i)->department);
    }
    return n;    
}
int display(emp **e, int n)
{
    int i;
    printf("The employee details are:\n");
    for (i = 0; i < n; i++)
    {
        printf("Employee ID: %s\n",(*e+i)->emp_id);
        printf("Employee name: %s\n",(*e+i)->name);
        printf("Employee department: %s\n",(*e+i)->department);
    }
    return 0;
}