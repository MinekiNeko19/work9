#include <stdio.h>

struct cat {char name[20]; int age; char breed[20];};

// function to print out the values in the struct
void print_cat(struct cat *c) {
    printf("This is the information on the cat, %s. %s is %d years old and is a %s.\n",
        c->name,c->name,c->age,c->breed);
}

// function to make a new struct
struct cat * add_cat(char n[20], int a, char b[20]) {
    struct cat * c = malloc(sizeof(struct cat));
    strcpy(c->name, n);
    strcpy(c->breed, b);
    c -> age = a;
    return c;
}

// main function
int main() {
    struct cat * Joline;
    strcpy(Joline->name, "Joline");
    Joline->age = 5;
    strcpy(Joline->breed, "Calico");
    print_cat(Joline);

    struct cat * Mark = add_cat("Mark", 3, "Siamese");
    print_cat(Mark);
    free(Mark);

    return 0;
}