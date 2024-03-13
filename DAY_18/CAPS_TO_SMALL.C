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
     for(int counter = 0; counter <= length ; counter=counter+1)
    {
        if(arr[counter]>= 'A' && arr[counter] <= 'Z')
        {
            arr[counter] = arr[counter] + 32;
           
        }
    }
    
    printf("\nString in lowercase: %s", arr);

    return 0;
}

