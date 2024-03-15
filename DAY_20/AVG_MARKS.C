#include<stdio.h>

int main() {
    int n, counter, counter_2;
    printf("\nHow many subjects do you want to enter?\n");
    scanf("%d", &n);
    char subjects[n][20];
    int marks[n][5]; 
    int sum,avg;

  
    for(counter = 0; counter < n; counter++) {
        printf("\nEnter the name of subject %d: ", counter + 1);
        scanf("%s", subjects[counter]);
    }

    
    for(counter = 0; counter < n; counter++) {
        printf("\nEnter the marks for %s subject:\n", subjects[counter]);
        for(counter_2 = 0; counter_2 < 5; counter_2++) {
            printf("Enter mark %d: ", counter_2 + 1);
            scanf("%d", &marks[counter][counter_2]);
            sum = sum+ *(marks[counter]);
        }
    }
    avg =(float) sum /n;


    
    printf("\nSubject\t\tMarks\n");
    for(counter = 0; counter < n; counter++) {
        printf("%s\t\t", subjects[counter]);
        for(counter_2 = 0; counter_2 < 5; counter_2++) {
            printf("%d ", marks[counter][counter_2]);
        }
        printf("\n");
        printf("\n The avg is %d\n",avg);
    }

    return 0;
}
