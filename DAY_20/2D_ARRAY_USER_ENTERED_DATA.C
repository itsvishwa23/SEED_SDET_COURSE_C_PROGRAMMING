#include<stdio.h>
#define MAX 20
int main()
{
    int arr[20][20];
    int n1,n2,i,j;
    printf("\n Enter the size of rows\n");
    scanf("%d",&n1);
    printf("\n Enter the size of colum\n");
    scanf("%d",&n2);
    for(i=0;i<n1;i=i+1)
    {
        for(j=0;j<n2;j=j+1)
        {
            printf("\n Enter the %d\n",j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<n1;i=i+1)
    {
        for(j=0;j<n2;j=j+1)
        {
            printf("\t\t%d",arr[i][j]);
        }
        printf("\n");
    }


}