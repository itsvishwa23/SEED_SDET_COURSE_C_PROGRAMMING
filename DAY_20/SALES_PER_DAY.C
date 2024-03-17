#include<stdio.h>
int main() {
    int sales[7][7]; 
    char day[8][20];

    int i,j;

    for(i = 0; i < 7; i++) {
        printf("\nEnter the day of the week: ");
        scanf("%s", day[i]);
        printf("Enter sales for %s day: ", day[i]);
        for(j = 0; j < 1; j++) { 
            scanf("%d", &sales[i][j]);
        }
    }

    for(i = 0; i < 7; i++) {
        printf("%s", day[i]);
        for(j = 0; j < 1; j++) { 
            printf("\t%d", sales[i][j]);
        }
        printf("\n");
    }

    return 0;
}
