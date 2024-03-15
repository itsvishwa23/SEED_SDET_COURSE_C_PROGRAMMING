#include<stdio.h>
int main()
{
    int arr[2][2]={10,20,30,40};
    int (*ptr)[2] = arr;  
    printf("%d",*(*(ptr+0)+0));
}