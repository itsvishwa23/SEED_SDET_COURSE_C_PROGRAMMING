#include<stdio.h>
#define num 6
void AcceptMarks(int[],int);
void DisplayMarks(int[],int);
void CountSubjects(int[],int);
int main()
{
    int n=6;
    int mks[10];
    AcceptMarks(mks,n);
    DisplayMarks(mks,n);
    CountSubjects(mks,n);

}
void AcceptMarks(int mks[],int n)
{
    int i;
    for(i=0;i<n;i=i+1)
    {
        printf("\n Enter the marks of %d Subject \n",i+1);
        scanf("%d",&mks[i]);
    }

}

void DisplayMarks(int mks[],int n)
{
    int i;
    for(i=0;i<n;i=i+1)
    {
        printf("\n The entered marks are %d Subject",i+1);
        printf("\t %d \t",mks[i]);
    }

}

void CountSubjects(int mks[],int n)
{
    int i,fail=0,pass=0;
    for(i=0;i<n;i=i+1)
    {
        if(mks[i]<40)
        {
            fail++;
        }
        else
        {
            pass++;
        }
    }
        printf("\n The student has passed in %d subjects",pass);
        printf("\n The students has failed in %d subjects",fail);
}