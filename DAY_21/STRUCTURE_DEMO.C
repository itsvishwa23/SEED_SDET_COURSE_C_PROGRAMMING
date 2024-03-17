#include<stdio.h>
#define max 40
struct Employee
{
   int emp_id;
   char name[max]; 
   float sal;
   char addr[max];
}; 
int main()
{
 
    Employee e;

    printf("\n Enter the id:");
    scanf("%d",&e.emp_id);

    printf("\n Enter the name:");
    scanf("%s",&e.name);

    printf("\n Enter the salary:");
    scanf("%f",&e.sal);

    printf("\n Enter the address:");
    scanf("%s",&e.addr);

    printf("\n The details are: \n");

    printf("\n%d",e.emp_id);
    printf("\n%s",e.name);
    printf("\n%f",e.sal);
    printf("\n%s",e.addr);


}