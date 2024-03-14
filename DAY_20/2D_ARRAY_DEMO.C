// #include<stdio.h>
// int main()
// {
//     int arr[2][2] = {100,200,300,400};
//     int size = 2;
//     int i, j;

//     for(i = 0; i < size; i++)
//     {
//         for(j = 0; j < size; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//        printf("\n");
//     }
 
//     return 0;
// }



#include<stdio.h>
int main()
{
    printf("\nEnter the number of students: ");
    int n;
    scanf("%d", &n);
    char names[n][20];
    int marks[n][3];

   
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter the name of student: ");
        scanf("%s", names[i]);

        for(int j = 0; j < 3; j++)
        {
            printf("Enter the marks of student %s for subject %d: ", names[i], j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    
    printf("\nStudent Details:\n");
    for(int i = 0; i < n; i++)
    {
        printf("\nThe name of student: %s\n", names[i]);
        printf("The marks of student: ");
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
