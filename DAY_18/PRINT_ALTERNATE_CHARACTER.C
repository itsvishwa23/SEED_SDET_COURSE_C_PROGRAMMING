#include<stdio.h>
#include<string.h>
int main()
{
    char arr[50];
    printf("\n Enter the string\n");
    gets(arr);
    printf("\n The given string is:");
    puts(arr);
    int n=strlen(arr);
    int counter;
    for(counter=0;counter<n;counter=counter+2)
    {
        printf("%c", arr[counter]);
    }
    
}