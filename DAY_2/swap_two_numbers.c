#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;

    printf("Enter the First Number");
    scanf("%d"&a);

    printf("Enter the Second Number");
    scanf("%d"&b);

    a=b;
    b=a;
    a=c;

    printf("The numbers after swapping are\n\n");
    printf("Number 1= %d Number 2= %d");

}