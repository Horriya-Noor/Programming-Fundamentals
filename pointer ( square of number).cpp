#include <stdio.h>

int square(int num) {
    return num * num;
}

int main() {
   
    int (*squarePtr)(int);

    squarePtr = square;

    int numbers[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        printf("Square of %d: %d\n", numbers[i], squarePtr(numbers[i]));
    }

    int input;
    printf("Enter a number: ");
    scanf("%d", &input);
 
    int result = squarePtr(input);
    printf("Square of %d: %d\n", input, result);

    return 0;
}

