#include<stdio.h>

int main()
{
    char arr[51];
    int n, counter;
    printf("\n Enter the number of characters you want to add\n");
    scanf("%d", &n);

    for(counter = 0; counter < n; counter=counter+1)
    {
        printf("\n Enter the character \n");
        scanf(" %c", &arr[counter]);
    }
    arr[counter] = '\0';
    printf("\n The data added is: ");
    for(counter = 0; counter < n; counter=counter+1)
    {
        printf("%c", arr[counter]);
    }

    return 0;
}
