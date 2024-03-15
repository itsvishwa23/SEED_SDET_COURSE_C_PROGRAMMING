#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, num;
    char *ptr;
    printf("\n Enter the number of students you want to add \n");
    scanf("%d",&num);
    ptr = (char*)malloc(num * sizeof(char));
    for(i=0;i<num;i=i+1)
    {
        printf("\n Enter the name of the %d student",i+1);
        scanf(" %s", ptr[i]);
    }

    for(i=0;i<num;i=i+1)
    {
        printf("\n The name of the %d student is ",i+1);
        printf("%s",ptr[i]);
    }
    


}

