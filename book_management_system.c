#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100

typedef struct {
    int bookID;
    char name[100];
    char author[100];
    char category[50];
    float price;
    float rating;
} Book;

Book books[MAX_BOOKS];
int bookCount = 0;

// Function declarations
void addBook();
void removeBook();
void searchBook();
void showAuthorBooks();
void showCategoryBooks();
void updateBook();
void displayAllBooks();


int main() {
    int choice;
    do {
        printf("\nBook Management System\n");
        printf("1. Add Book\n2. Remove Book\n3. Search Book\n4. Show Author's Books\n");
        printf("5. Show Category's Books\n6. Update Book Data\n");
        printf("7. Display All Books\n Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar(); // clear newline

        switch (choice) {
            case 1: addBook(); break;
            case 2: removeBook(); break;
            case 3: searchBook(); break;
            case 4: showAuthorBooks(); break;
            case 5: showCategoryBooks(); break;
            case 6: updateBook(); break;
            case 7: displayAllBooks(); break;
            case 8: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 11);
    return 0;
}

void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("Book limit reached!\n");
        return;
    }
    Book b;
    printf("Enter Book ID: "); scanf("%d", &b.bookID);
    getchar();
    printf("Enter Book Name: "); fgets(b.name, sizeof(b.name), stdin); strtok(b.name, "\n");
    printf("Enter Author Name: "); fgets(b.author, sizeof(b.author), stdin); strtok(b.author, "\n");
    printf("Enter Category: "); fgets(b.category, sizeof(b.category), stdin); strtok(b.category, "\n");
    printf("Enter Price: "); scanf("%f", &b.price);
    printf("Enter Rating: "); scanf("%f", &b.rating);
    books[bookCount++] = b;
    printf("Book added successfully.\n");
}

void removeBook() {
    int id, found = 0;
    printf("Enter Book ID to remove: ");
    scanf("%d", &id);
    for (int i = 0; i < bookCount; i++) {
        if (books[i].bookID == id) {
            for (int j = i; j < bookCount - 1; j++) {
                books[j] = books[j + 1];
            }
            bookCount--;
            found = 1;
            printf("Book removed.\n");
            break;
        }
    }
    if (!found) printf("Book not found.\n");
}

void searchBook() {
    int id;
    char name[100];
    int choice;
    printf("Search by: 1. ID  2. Name\n");
    scanf("%d", &choice);
    getchar();
    if (choice == 1) {
        printf("Enter Book ID: ");
        scanf("%d", &id);
        for (int i = 0; i < bookCount; i++) {
            if (books[i].bookID == id) {
                printf("Found: %s by %s\n", books[i].name, books[i].author);
                return;
            }
        }
    } else {
        printf("Enter Book Name: ");
        fgets(name, sizeof(name), stdin); strtok(name, "\n");
        for (int i = 0; i < bookCount; i++) {
            if (strcmp(books[i].name, name) == 0) {
                printf("Found: %s by %s\n", books[i].name, books[i].author);
                return;
            }
        }
    }
    printf("Book not found.\n");
}

void showAuthorBooks() {
    char author[100];
    printf("Enter Author Name: ");
    getchar();
    fgets(author, sizeof(author), stdin); strtok(author, "\n");
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(books[i].author, author) == 0) {
            printf("%s (%.2f)\n", books[i].name, books[i].price);
        }
    }
}

void showCategoryBooks() {
    char category[100];
    printf("Enter Category: ");
    getchar();
    fgets(category, sizeof(category), stdin); strtok(category, "\n");
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(books[i].category, category) == 0) {
            printf("%s by %s\n", books[i].name, books[i].author);
        }
    }
}

void updateBook() {
    int id;
    printf("Enter Book ID to update: ");
    scanf("%d", &id);
    for (int i = 0; i < bookCount; i++) {
        if (books[i].bookID == id) {
            printf("Enter new Price: ");
            scanf("%f", &books[i].price);
            printf("Enter new Rating: ");
            scanf("%f", &books[i].rating);
            printf("Book updated.\n");
            return;
        }
    }
    printf("Book not found.\n");
}


void displayAllBooks() {
    for (int i = 0; i < bookCount; i++) {
        printf("ID: %d | %s by %s | %s | $%.2f | Rating: %.1f\n",
               books[i].bookID, books[i].name, books[i].author,
               books[i].category, books[i].price, books[i].rating);
    }
}
