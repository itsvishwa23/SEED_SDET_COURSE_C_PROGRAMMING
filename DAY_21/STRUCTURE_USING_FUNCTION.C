#include<stdio.h>
# define MAX 20

struct Department
{
    int dep_id;
    char dep_name[MAX];
    char location[MAX];   
    
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

}