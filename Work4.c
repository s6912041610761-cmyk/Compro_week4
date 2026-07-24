#include <stdio.h>

int main() {

    char name_first;
    int age;
    
    printf("Enter the first character of your name: ");
    scanf(" %c", &name_first);

    printf("Enter your age: ");
    scanf(" %d", &age);

    printf("Hi %c. you are %d years old.\n", name_first, age);

    return 0;
}