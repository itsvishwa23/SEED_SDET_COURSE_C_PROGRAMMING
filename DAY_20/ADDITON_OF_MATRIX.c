#include<stdio.h>
int main()
{
    int i,j;
    int arr[3][3];
    int arr_two[3][3];
    int sum[3][3];
    printf("\n Enter the first matrix :");
    for(i=0;i<3;i=i+1)
    {
        for(j=0;j<3;j=j+1)
        {
            printf("\n Enter the %d Element\n",j+1);
            scanf("%d",&arr[i][j]);
        }
    }


    printf("\n Enter the second matrix :");
    for(i=0;i<3;i=i+1)
    {
        for(j=0;j<3;j=j+1)
        {
            printf("\n Enter the %d Element\n",j+1);
            scanf("%d",&arr_two[i][j]);
        }
    }

    printf("\n The Additon is  :\n");
     for(i=0;i<3;i=i+1)
    {
        for(j=0;j<3;j=j+1)
        {
            sum[i][j] = arr[i][j] + arr_two[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

}