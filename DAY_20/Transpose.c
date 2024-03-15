#include<stdio.h>
int main()
{
    int i,j;
    int arr[3][3];
    for(i=0;i<3;i=i+1)
    {
        for(j=0;j<3;j=j+1)
        {
            printf("\n Enter the %d Element\n",j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n The Given matrix is :\n");

    for(i=0;i<3;i=i+1)
    {
        for(j=0;j<3;j=j+1)
        {
            printf("\t%d",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n The Transpsoe of matrix is :\n");

    for(i=0;i<3;i=i+1)
    {
        for(j=0;j<3;j=j+1)
        {
            printf("\t%d",arr[j][i]);
        }
        printf("\n");
    }
    

}