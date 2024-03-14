#include <stdio.h>
#include <string.h>

int main() {
    char arr[50];
    printf("\n Enter the string\n");
    fgets(arr, sizeof(arr), stdin);

    printf("\n The given string is:");
    puts(arr);

    char arrr[50];
    strcpy(arrr, arr);
    int i;
    int length = strlen(arr);
   
    printf("The reversed string is:");
    for (int counter = length - 1,i=0; counter >= 0; counter--,i=i+1) {
        //printf("%c", arr[counter]);
        arrr[i]= arr[counter];
    }
    arrr[i]='\0';
    puts(arrr);
    printf("\n");

    if (strcmp(arrr, arr) == 0) {
        printf("\n The String is a palindrome \n");
    } else {
        printf("\n The String is not a palindrome \n");
    }

    return 0;
}
