#include<stdio.h>
int main()
{
    int i,j,n;
    float sum,avg;
    printf("\n Enter the year you want to add \n");
    scanf("%d",&n);
    int year[n][20];
    int rainfall[n][20];
    for(i=0;i<n;i=i+1)
    {
        printf("\n Enter the %d year",i+1);
        scanf("%d",&year[i]);

        for(j=0;j<4;j=j+1)
        {
            sum = 0;
            printf("\n Enter the %d rainfall",j+1);
            scanf("%d",&rainfall[i][j]);
            sum=sum+rainfall[i][j];
        }

        
        avg=sum/4;
        printf("\nThe average rainfall for year %d is %.2f\n", year[i], avg);


    }

    for(i=0;i<n;i=i+1)
    {
        printf("\n The year is");
        printf("\t%d",year[i][j]);

        for(j=0;j<4;j=j+1)
        {
            printf("\n The %d rainfall",j+1);
            printf("\t%d",rainfall[i][j]);
        }

        printf("\n The average rainfall is %f",avg);
    }
}