#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    char subject[100];
    int bookid;
};

void printBookDetails(struct Book book) {
    printf("Book title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Subject: %s\n", book.subject);
    printf("Book ID: %d\n", book.bookid);
}

int main() {
    struct Book book1 = {"The Hitchhiker's Guide to the Galaxy", "Douglas Adams", "Science Fiction", 42};
    struct Book book2 = {"The Lord of the Rings", "J.R.R. Tolkien", "Fantasy", 123};
    
    printf("Book 1 details:\n");
    printBookDetails(book1);
    printf("\n");
    
    printf("Book 2 details:\n");
    printBookDetails(book2);
    printf("\n");
    
    return 0;
}
