#include<stdio.h>

int main()
{
    char arr[50];
    printf("\n Enter the string\n");
    gets(arr);
    printf("\n The given string is:");
    puts(arr);
    int length = 0;
    while(arr[length] != '\0')
    {
        length=length+1;
    }

    printf("\n The reverse string is: ");
   
    for(int counter = length; counter >=0 ; counter=counter-1)
    {
        printf("%c", arr[counter]);
    }

    return 0;
}
