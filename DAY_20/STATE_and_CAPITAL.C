#include<stdio.h>
int main()
{   
    int n,i,j;
    printf("\n Enter the number of cities you want to add\n");
    scanf("%d",&n);
    char state[n][20];
    char capital[n][20];
    for(i=0;i<n;i++)
    {
        printf("\n Enter the name of %d state",i);
        scanf("%s",state[i]);
        for(j=0;j<1;j++)
        {
            printf("\n Enter the name of capital for the state %s",state[i]);
            scanf("%s",capital[i]);
        }
    }


    printf("\n State wise city capital Details:\n");
    for(i=0;i<n;i++)
    {
        printf("\n The name of %d state",i);
        printf("%s",state[i]);
        for(j=0;j<1;j++)
        {
            printf("\n The name of capital for the state %s",state[i]);
            printf("%s",capital[i]);
        }
        
    }

}