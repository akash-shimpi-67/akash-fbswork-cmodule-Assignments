#include <stdio.h>
#include <string.h>

struct student {
    int rollno;
    char name[50];
    float marks;
};


void storeByValue(struct student s);                     // Pass by value
void storeByAddress(struct student *s);                  // Pass one struct by address
void storeArrayByAddress(struct student s[], int n);     // Pass array of structs by address

void displayByValue(struct student s);
void displayByAddress(struct student *s);
void displayArrayByAddress(struct student s[], int n);

void main() {
    struct student s1;

    storeByAddress(&s1);
    displayByAddress(&s1);

    storeByValue(s1);
    displayByValue(s1);

    int n = 2;
    struct student arr[2];

    storeArrayByAddress(arr, n);
    displayArrayByAddress(arr, n);
}

void storeByValue(struct student s) {
    printf("\n[Pass by Value] Enter details for student:\n");
    printf("Roll No: "); scanf("%d", &s.rollno);
    printf("Name: "); scanf(" %[^\n]", s.name);
    printf("Marks: "); scanf("%f", &s.marks);
}

void displayByValue(struct student s) {
    printf("\n[Pass by Value] Student Details:\n");
    printf("Roll No: %d\n", s.rollno);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

// Pass one structure by address
void storeByAddress(struct student *s) {
    printf("\n[Pass One Struct by Address] Enter details for student:\n");
    printf("Roll No: "); scanf("%d", &s->rollno);
    printf("Name: "); scanf(" %[^\n]", s->name);
    printf("Marks: "); scanf("%f", &s->marks);
}

void displayByAddress(struct student *s) {
    printf("\n[Pass One Struct by Address] Student Details:\n");
    printf("Roll No: %d\n", s->rollno);
    printf("Name: %s\n", s->name);
    printf("Marks: %.2f\n", s->marks);
}

// Pass array of structs by address
void storeArrayByAddress(struct student s[], int n) {
    printf("\n[Pass Array by Address] Enter details for %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: "); scanf("%d", &s[i].rollno);
        printf("Name: "); scanf(" %[^\n]", s[i].name);
        printf("Marks: "); scanf("%f", &s[i].marks);
    }
}

void displayArrayByAddress(struct student s[], int n) {
    printf("\n[Pass Array by Address] Student Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %d\n", s[i].rollno);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }
}
