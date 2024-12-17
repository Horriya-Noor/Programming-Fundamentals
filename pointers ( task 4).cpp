#include <stdio.h>

int main() {
  
    int var = 5;

    int *pointVar = &var;

    printf("Original value of var: %d\n", var);

    printf("Address of var: %p\n", (void *)&var);

    printf("Value stored in pointVar (address of var): %p\n", (void *)pointVar);

    printf("Content of the address pointed to by pointVar (value of var): %d\n", *pointVar);

    printf("Enter a new value for var: ");
    scanf("%d", pointVar);

    printf("Enter a new value for var: ");
    scanf("%d", pointVar);

    printf("Updated value of var: %d\n", var);

    return 0;
}

