#include<stdio.h>

#define MAX 20

struct Marks
{
    char subj[MAX];
    int marks;

};

struct Student
{
    int sid;
    char name[MAX];
    char addr[MAX];
    char stud_class[MAX];
    char sdiv[MAX];
    struct Marks m1;

};



void Display_Data(struct Student);

struct Student Add_Data();

int main()
{
    struct Student s1;
    s1=Add_Data();
    Display_Data(s1);
}

struct Student Add_Data()
{
    struct Student s1;

    printf("\n Enter Student id:\n");
    scanf("%d",&s1.sid);

    printf("\n Enter Student Name:\n");
    scanf(" %s",&s1.name);

    printf("\n Enter Student Address:\n");
    scanf(" %s",&s1.addr);

    printf("\n Enter Student Class:\n");
    scanf(" %s",&s1.stud_class);

    printf("\n Enter Student Division:\n");
    scanf(" %s", s1.sdiv);

    printf("\n Enter Student Subject:\n");
    scanf(" %s",&s1.m1.subj);

    printf("\n Enter Student Subject Marks:\n");
    scanf(" %d",&s1.m1.marks);

    return s1;



}

void Display_Data(struct Student s1)
{
    printf("\n Student id:\n");
    printf("%d",s1.sid);

    printf("\n Student Name:\n");
    printf(" %s",s1.name);

    printf("\n Student Address:\n");
    printf(" %s",s1.addr);

    printf("\n Student Class:\n");
    printf(" %s",s1.stud_class);

    printf("\n Student Division:\n");
    printf(" %s",s1.sdiv);

    printf("\n Student Subject:\n"); 
    printf(" %s",s1.m1.subj);

    printf("\n Student Subject Marks:\n");
    printf(" %d",s1.m1.marks);
}