#include<stdio.h>
int main()
{
    int n,j,i;
    printf("\n Enter the number of student you want to enter the data");
    scanf("%d",&n);
    char studentname[n][20];
    char fathersname[n][20];
    for(i=0;i<n;i=i+1)
    {
        printf("\n Enter the %d student name",i);
        scanf("%s",studentname[i]);

        for(j=0;j<n;j=j=1)
        {
         printf("\n Enter the father name");
         scanf("%s",fathersname[i]);   
        }
    }


     for(i=0;i<n;i=i+1)
    {
        printf("\n Student name");
        printf("%s",studentname[i]);

        for(j=0;j<n;j=j=1)
        {
         printf("\n Father name");
         printf("%s",fathersname[i]);   
        }
    }
} 