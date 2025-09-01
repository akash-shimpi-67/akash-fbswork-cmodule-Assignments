#include <stdio.h>
#include <string.h>

// Define the V structure
struct emp {
    int id;
    char name[50];
    float salary;
};

// Function declarations
void storeByValue(struct emp e);                     // Pass by value
void storeByAddress(struct emp *e);                  // Pass one struct by address
void storeArrayByAddress(struct emp e[], int n);     // Pass array of structs by address

void displayByValue(struct emp e);
void displayByAddress(struct emp *e);
void displayArrayByAddress(struct emp e[], int n);

void main() {
    // Declare one employee for value and address examples
    struct emp e1;

    // Store and display using pass by address (single struct)
    storeByAddress(&e1);
    displayByAddress(&e1);

    // Store and display using pass by value
    storeByValue(e1);  // Note: Modifications inside won't affect main copy
    displayByValue(e1);

    // Array of structures
    int n = 2;
    struct emp arr[2];

    // Store and display using array passed by address
    storeArrayByAddress(arr, n);
    displayArrayByAddress(arr, n);
}

// Pass by value
void storeByValue(struct emp e) {
    printf("\n[Pass by Value] Enter details for Employeee:\n");
    printf("Id : "); scanf("%d", &e.id);
    printf("Name: "); scanf(" %[^\n]", e.name);
    printf("Salary: "); scanf("%f", &e.salary);
}

void displayByValue(struct emp e) {
    printf("\n[Pass by Value] Employeee Details:\n");
    printf("Roll No: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Marks: %.2f\n", e.salary);
}

// Pass one structure by address
void storeByAddress(struct emp *e) {
    printf("\n[Pass One Struct by Address] Enter details for Employeee:\n");
    printf("id No: "); scanf("%d", &e->id);
    printf("Name: "); scanf(" %[^\n]", e->name);
    printf("salary: "); scanf("%f", &e->salary);
}

void displayByAddress(struct emp *e) {
    printf("\n[Pass One Struct by Address] EMPLOYEE Details:\n");
    printf("Id: %d\n", e->id);
    printf("Name: %s\n", e->name);
    printf("salary: %.2f\n", e->salary);
}

// Pass array of structs by address
void storeArrayByAddress(struct emp e[], int n) {
    printf("\n[Pass Array by Address] Enter details for %d employee:\n", n);
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Id: "); scanf("%d", &e[i].id);
        printf("Name: "); scanf(" %[^\n]", e[i].name);
        printf("Salary: "); scanf("%f", &e[i].salary);
    }
}

void displayArrayByAddress(struct emp e[], int n) {
    printf("\n[Pass Array by Address] employeee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nemployee %d:\n", i + 1);
        printf("id: %d\n", e[i].id);
        printf("Name: %s\n", e[i].name);
        printf("Salary: %.2f\n", e[i].salary);
    }
}
