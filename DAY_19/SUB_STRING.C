#include<stdio.h>
void substring(char [],int,int);
int main()
{
    char string[50];
    int char_index,size;
    printf("\n Enter the string\n");
    gets(string);
    printf("\n The entered string is\n");
    puts(string);
    substring(string,size,char_index);

}
void substring(char string[],int char_index,int size)
{
    int counter;
    printf("\n Enter the starting of the index\n");
    scanf("%d",&char_index);
    printf("\n Enter the size\n");
    scanf("%d",&size);
    for(counter=0;counter<size;counter=counter+1)
    {
        printf("%c",string[counter]);
    }

}

