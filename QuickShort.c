#include <stdio.h>  // Include the standard input/output header file.
#include <stdlib.h> // Include the standard library header file.

// Comparator function used for qsort.
int comparetor(const void *x, const void *y)
{
    return (*(int *)x - *(int *)y);
}

int main() // Start of the main function.
{
    int my_array[100]; // Declare an integer array 'my_array' with a maximum size of 100.
    int n, i;          // Declare integer variables 'n' and 'i'.

    printf("\nInput the number of elements to be stored in the array :"); // Prompt the user to input the number of elements.
    scanf("%d", &n);                                                      // Read the user's input and store it in 'n'.

    printf("Input %d elements in the array :\n", n + 1); // Prompt the user to input the elements of the array.
    for (i = 0; i < n; i++)                              // Start of a for loop to iterate over the elements of the array.
    {
        printf("element - %d : ", i); // Prompt the user for the value of the current element.
        scanf("%d", &my_array[i]);    // Read the user's input and store it in the current element of 'my_array'.
    }

    qsort(my_array, n, sizeof(int), comparetor); // Sort the array 'my_array' using the qsort function and the 'comparetor' function.

    printf("\nAfter sorting the array are :\n"); // Print a message indicating that the array has been sorted.
    for (i = 0; i < n; i++)                      // Start of a for loop to iterate over the sorted elements of the array.
        printf("%d \n", my_array[i]);            // Print the current element of the sorted array.

    return 0; // Return 0 to indicate successful execution of the program.
} // End of the main function.
