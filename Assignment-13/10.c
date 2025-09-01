#include <stdio.h>

// Define the product structure
struct product {
    int id;
    char name[50];
    int quantity;
    float price;
};

// Function prototypes
void storeByValue(struct product p);
void displayByValue(struct product p);

void storeByAddress(struct product *p);
void displayByAddress(struct product *p);

void storeArrayByAddress(struct product p[], int n);
void displayArrayByAddress(struct product p[], int n);

void main() {
    struct product p1;

    // Pass one struct by address
    storeByAddress(&p1);
    displayByAddress(&p1);

    // Pass by value (changes won’t persist)
    storeByValue(p1);
    displayByValue(p1);

    // Array of products
    int n = 2;
    struct product productList[2];

    storeArrayByAddress(productList, n);
    displayArrayByAddress(productList, n);
}

// Pass by value
void storeByValue(struct product p) {
    printf("\n[Pass by Value] Enter Product details:\n");
    printf("ID: "); scanf("%d", &p.id);
    printf("Name: "); scanf(" %[^\n]", p.name);
    printf("Quantity: "); scanf("%d", &p.quantity);
    printf("Price: "); scanf("%f", &p.price);
}

void displayByValue(struct product p) {
    printf("\n[Pass by Value] Product Details:\n");
    printf("ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Quantity: %d\n", p.quantity);
    printf("Price: %.2f\n", p.price);
}

// Pass one struct by address
void storeByAddress(struct product *p) {
    printf("\n[Pass One Struct by Address] Enter Product details:\n");
    printf("ID: "); scanf("%d", &p->id);
    printf("Name: "); scanf(" %[^\n]", p->name);
    printf("Quantity: "); scanf("%d", &p->quantity);
    printf("Price: "); scanf("%f", &p->price);
}

void displayByAddress(struct product *p) {
    printf("\n[Pass One Struct by Address] Product Details:\n");
    printf("ID: %d\n", p->id);
    printf("Name: %s\n", p->name);
    printf("Quantity: %d\n", p->quantity);
    printf("Price: %.2f\n", p->price);
}

// Pass array of structures by address
void storeArrayByAddress(struct product p[], int n) {
    printf("\n[Pass Array by Address] Enter details for %d products:\n", n);
    for (int i = 0; i < n; i++) {
        printf("\nProduct %d:\n", i + 1);
        printf("ID: "); scanf("%d", &p[i].id);
        printf("Name: "); scanf(" %[^\n]", p[i].name);
        printf("Quantity: "); scanf("%d", &p[i].quantity);
        printf("Price: "); scanf("%f", &p[i].price);
    }
}

void displayArrayByAddress(struct product p[], int n) {
    printf("\n[Pass Array by Address] Product Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nProduct %d:\n", i + 1);
        printf("ID: %d\n", p[i].id);
        printf("Name: %s\n", p[i].name);
        printf("Quantity: %d\n", p[i].quantity);
        printf("Price: %.2f\n", p[i].price);
    }
}
