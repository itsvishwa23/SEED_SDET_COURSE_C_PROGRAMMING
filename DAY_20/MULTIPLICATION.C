#include<stdio.h>
int main()
{
    printf("\n Which number multiplication table you want\n");
    int n;
    scanf("%d", &n);
    int arr [n][10];
    int i,j;
    int multi;
    for(i=0;i<n;i=i+1)
    {
        for(j=0;j<10;j=j+1)
        
        {
            multi=n*arr[j];
            printf("\n Multiplication of %d x %d = %d", n,j,multi);
        }
    }
}