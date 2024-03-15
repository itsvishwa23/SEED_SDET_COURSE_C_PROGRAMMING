#include<stdio.h>
int main()
{
    char students[5][20];
    char subject[5][10];

    int n1,n2,i,j;
    printf("\n Enter the number of students\n");
    scanf("%d",&n1);
    for(i=0;i<n1;i=i+1)
    {
        printf("\nEnter name for student %d: ", i + 1);
        scanf("%s", students[i]);
        printf("Enter marks for student %d (5 subjects): ", i + 1);
        for(j=0;j<5;j=j+1)
        {
            scanf("%d", &subject[i][j]);
        }
    }

     for(i=0;i<n1;i=i+1)
    {
        printf("%s", students[i]);
        for(j=0;j<5;j=j+1)
        {
            printf("\t%d", subject[i][j]);
        }
         printf("\n");
    }
}