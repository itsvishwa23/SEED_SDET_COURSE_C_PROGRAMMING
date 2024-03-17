#include<stdio.h>
# define MAX 20

struct Employee
{
   int emp_id;
   char name[MAX]; 
   float sal;
   char addr[MAX];
}; 


struct Department
{
    int dep_id;
    char dep_name[MAX];
    char location[MAX];
    struct Employee e;
};

struct Department add_data();
void display_data(struct Department);

int main()
{
    struct Department d;
    d=add_data();
    display_data(d);

    
}

struct Department add_data()
{   
    struct Department d;

    printf("\n Enter the id:");
    scanf("%d",&d.dep_id);

    printf("\n Enter the name:");
    scanf("%s",d.dep_name);

    printf("\n Enter the Location:");
    scanf("%s",d.location);

    printf("\n Enter the id:");
    scanf("%d",&d.e.emp_id);

    printf("\n Enter the name:");
    scanf("%s",d.e.name);

    printf("\n Enter the salary:");
    scanf("%f",&d.e.sal);

    printf("\n Enter the address:");
    scanf("%s",d.e.addr);




    return d;

}

void display_data(struct Department d)

{
    printf("\n id:");
    printf("%d",d.dep_id);

    printf("\n Name:");
    printf("%s",d.dep_name);

    printf("\n Location:");
    printf("%s",d.location);


    printf("\n The details are: \n");

    printf("\n%d",d.e.emp_id);
    printf("\n%s",d.e.name);
    printf("\n%f",d.e.sal);
    printf("\n%s",d.e.addr);


}