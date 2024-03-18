#include <stdio.h>
#define MAX 20

struct Student {
    int sid;
    char name[MAX];
    char addr[MAX];
    char stud_class[MAX];
    char sdiv[MAX];
};

void Add_Data(struct Student , int index);
void Display(struct Student s[], int index, int n);

int main() {
    int n, i;
    printf("\nHow many Students' data do you want to enter?\n");
    scanf("%d", &n);

    struct Student S[MAX];

    for (i = 0; i < n; i++) {
        Add_Data(S, i);
        Display(S, i, n);
    }

    return 0;
}

void Add_Data(struct Student s[], int index) {
    printf("Enter Student ID: ");
    scanf("%d", &s[index].sid);
    printf("Enter Name: ");
    scanf("%s", s[index].name);
    printf("Enter Address: ");
    scanf("%s", s[index].addr);
    printf("Enter Class: ");
    scanf("%s", s[index].stud_class);
    printf("Enter Division: ");
    scanf("%s", s[index].sdiv);
}

void Display(struct Student s[], int index, int n) {
    printf("\nEntered Students' data:\n");
    for (int i = 0; i < n; i++) {
        printf("Student ID: %d\n", s[i].sid);
        printf("Name: %s\n", s[i].name);
        printf("Address: %s\n", s[i].addr);
        printf("Class: %s\n", s[i].stud_class);
        printf("Division: %s\n\n", s[i].sdiv);
    }
}
