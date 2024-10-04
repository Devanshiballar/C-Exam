#include <stdio.h>

// Function to swap the values of two integers using pointers
void swap(int *a, int *b) {
    int temp;
    
    // Swap the values using a temporary variable
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Enter two integers:\n");
    scanf("%d %d", &num1, &num2);
    
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}
