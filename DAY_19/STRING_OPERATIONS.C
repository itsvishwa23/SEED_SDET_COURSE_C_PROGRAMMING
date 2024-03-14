#include<stdio.h>
#include<string.h>
void occurence(char [],int);
void blank(char [],int);
void words(char [],int);
void vowels(char [],int);
int main()
{
    char arr[50];
    int length;
    printf("\n Enter the string\n");
    gets(arr);
    length=strlen(arr);
    occurence(arr,length);
    blank(arr,length);
    words(arr,length);
    vowels(arr,length);
}

void occurence(char arr[], int length)
{
    int counter, occurence=0;
    char ch;
    printf("\nEnter the character to find the number of occurence");
    scanf("%c",&ch);
    for(counter=0; counter<length;counter=counter+1)
    {
        if(arr[counter]==ch)
        occurence=occurence+1;
    }

    printf("\n The number of times %c is occured in the string is:%d",ch,occurence);
}

void blank(char arr[], int length)
{
    int counter, blank=0;
    for(counter=0; counter<length;counter=counter+1)
    {
        if(arr[counter]==32)
        blank=blank+1;
    }

    printf("\n The number of times blank space is occured in the string is:%d",blank);

}

void words(char arr[], int length)
{
    int counter, words=0;
    for(counter=0; counter<length;counter=counter+1)
    {
        if(arr[counter]==32)
        words=words+1;
    }

    printf("\n The number of words in the string is:%d",words+1);

}
void vowels(char arr[], int length)
{
    int vowel=0;
     for(int counter = 0; counter <= length ; counter=counter+1)
    {
        if(arr[counter] == 'a' || arr[counter] == 'e' || arr[counter] == 'i' || arr[counter] == 'o' || arr[counter] == 'u' ||
           arr[counter] == 'A' || arr[counter] == 'E' || arr[counter] == 'I' || arr[counter] == 'O' || arr[counter] == 'U')
        
        vowel=vowel+1;

    }
    printf("\n The number of the vowels in the string is %d:",vowel);

}