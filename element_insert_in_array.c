#include <stdio.h>

int main() {
    int i, n, value, position;
    printf("Enter the number of elements in the array (max 99):\n");
    scanf("%d", &n);

    // Check if n is within the valid range
    if (n < 0 || n > 99) {
        printf("Invalid number of elements. Please enter a number between 0 and 99.\n");
        return 1; // Exit the program with an error code
    }

    printf("%d elements are:\n", n);
    int a[100]; // Array can hold up to 100 elements

    // Input elements into the array
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Ask for the position to insert the new element
    printf("Enter the location (1 to %d) of the new element:\n", n + 1);
    scanf("%d", &position);

    // Check if the position is valid
    if (position < 1 || position > n + 1) {
        printf("Invalid position. Please enter a position between 1 and %d.\n", n + 1);
        return 1; // Exit the program with an error code
    }

    // Ask for the value of the new element
    printf("Enter the value of the new element:\n");
    scanf("%d", &value);

    // Shift elements to the right to make space for the new element
    for (i = n; i >= position; i--) {
        a[i] = a[i - 1];
    }

    // Insert the new element
    a[position - 1] = value;

    // Increment the number of elements
    n++;

    // Print the resultant array
    printf("The resultant array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n"); // New line for better output formatting

    return 0;
}