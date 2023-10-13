// #include <stdio.h>
// int main(){
//     int n, sum = 0;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++){
//         sum += i;
//     }
//     printf("The sum of the first %d natural numbers is %d\n", n, sum);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char title[20];
    char author[20];
    char publication[20];
    float price;
};

int main() {
    int n;
    printf("number: ");
    scanf("%d", &n);

    struct Book *books = (struct Book *)malloc(n * sizeof(struct Book));

    for (int i = 0; i < n; i++) {
        printf("\nbook %d:\n", i + 1);
        printf("title: ");
        scanf(" %[^\n]s", books[i].title);
        printf("author: ");
        scanf(" %[^\n]s", books[i].author);
        printf("pub: ");
        scanf(" %[^\n]s", books[i].publication);
        printf("price: ");
        scanf("%f", &books[i].price);
    }

    // book info by that author
    char searchAuthor[20];
    printf("\nauthor's name: ");
    scanf(" %[^\n]s", searchAuthor);

    printf("\nbooks by %s:\n", searchAuthor);
    for (int i = 0; i < n; i++) {
        if (strcmp(books[i].author, searchAuthor) == 0) {
            printf("title: %s\n", books[i].title);
            printf("pub: %s\n", books[i].publication);
            printf("price: %.2f\n", books[i].price);
            printf("\n");
        }
    }

    free(books);

    return 0;
}