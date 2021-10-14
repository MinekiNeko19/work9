#include <stdio.h>

struct cat {char name[20]; int age; char breed[20];};

// function to print out the values in the struct
void print_cat(struct cat c) {
    printf("This is the information on the cat, %s. %s is %d years old and is a %s.\n",
        c.name,c.name,c.age,c.breed);
}

// function to make a new struct
struct cat * add_cat() {

}

// main function
int main() {
    struct cat Joline;
    strcpy(Joline.name, "Joline");
    Joline.age = 5;
    strcpy(Joline.breed, "Calico");
    print_cat(Joline);
    return 0;
}