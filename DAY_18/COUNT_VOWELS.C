#include<stdio.h>

int main()
{
    char arr[50];
    printf("\n Enter the string\n");
    gets(arr);
    printf("\n The given string is:");
    puts(arr);
    int length = 0;
    int vowel=0;
    while(arr[length] != '\0')
    {
        length=length+1;
    }
     for(int counter = 0; counter <= length ; counter=counter+1)
    {
        if(arr[counter] == 'a' || arr[counter] == 'e' || arr[counter] == 'i' || arr[counter] == 'o' || arr[counter] == 'u' ||
           arr[counter] == 'A' || arr[counter] == 'E' || arr[counter] == 'I' || arr[counter] == 'O' || arr[counter] == 'U')
        
        vowel=vowel+1;

    }
    printf("\n The number of the vowels in the string is %d:",vowel);


    return 0;
}
