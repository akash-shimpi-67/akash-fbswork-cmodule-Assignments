#include <stdio.h>
#include <string.h>

// Define the admin structure
struct admin {
    int id;
    char name[50];
    float salary;
    float allowance;
};

// Function declarations
void storeByValue(struct admin a);                      // Pass by value
void storeByAddress(struct admin *a);                   // Pass one struct by address
void storeArrayByAddress(struct admin a[], int n);      // Pass array of structs by address

void displayByValue(struct admin a);
void displayByAddress(struct admin *a);
void displayArrayByAddress(struct admin a[], int n);

void main() {
    // Declare one admin for value and address examples
    struct admin a1;

    // Store and display using pass by address (single struct)
    storeByAddress(&a1);
    displayByAddress(&a1);

    // Store and display using pass by value (won't affect original data)
    storeByValue(a1);
    displayByValue(a1);

    // Array of admin structures
    int n = 2;
    struct admin admins[2];

    // Store and display using array passed by address
    storeArrayByAddress(admins, n);
    displayArrayByAddress(admins, n);
}

// Pass by value
void storeByValue(struct admin a) {
    printf("\n[Pass by Value] Enter admin details:\n");
    printf("ID: "); scanf("%d", &a.id);
    printf("Name: "); scanf(" %[^\n]", a.name);
    printf("Salary: "); scanf("%f", &a.salary);
    printf("Allowance: "); scanf("%f", &a.allowance);
}

void displayByValue(struct admin a) {
    printf("\n[Pass by Value] Admin Details:\n");
    printf("ID: %d\n", a.id);
    printf("Name: %s\n", a.name);
    printf("Salary: %.2f\n", a.salary);
    printf("Allowance: %.2f\n", a.allowance);
}

// Pass one structure by address
void storeByAddress(struct admin *a) {
    printf("\n[Pass One Struct by Address] Enter admin details:\n");
    printf("ID: "); scanf("%d", &a->id);
    printf("Name: "); scanf(" %[^\n]", a->name);
    printf("Salary: "); scanf("%f", &a->salary);
    printf("Allowance: "); scanf("%f", &a->allowance);
}

void displayByAddress(struct admin *a) {
    printf("\n[Pass One Struct by Address] Admin Details:\n");
    printf("ID: %d\n", a->id);
    printf("Name: %s\n", a->name);
    printf("Salary: %.2f\n", a->salary);
    printf("Allowance: %.2f\n", a->allowance);
}

// Pass array of structs by address
void storeArrayByAddress(struct admin a[], int n) {
    printf("\n[Pass Array by Address] Enter details for %d admins:\n", n);
    for (int i = 0; i < n; i++) {
        printf("\nAdmin %d:\n", i + 1);
        printf("ID: "); scanf("%d", &a[i].id);
        printf("Name: "); scanf(" %[^\n]", a[i].name);
        printf("Salary: "); scanf("%f", &a[i].salary);
        printf("Allowance: "); scanf("%f", &a[i].allowance);
    }
}

void displayArrayByAddress(struct admin a[], int n) {
    printf("\n[Pass Array by Address] Admin Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nAdmin %d:\n", i + 1);
        printf("ID: %d\n", a[i].id);
        printf("Name: %s\n", a[i].name);
        printf("Salary: %.2f\n", a[i].salary);
        printf("Allowance: %.2f\n", a[i].allowance);
    }
}
