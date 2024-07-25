#include <stdio.h>

// Function prototype for adding two numbers using call by reference
long addTwoNumbers(long *, long *);

int main() {
    long fno, sno, sum;

    printf("\n\n Pointer : Add two numbers using call by reference:\n");
    printf("-------------------------------------------------------\n");

    printf(" Input the first number : ");
    scanf("%ld", &fno); // Read the first number from the user
    printf(" Input the second number : ");
    scanf("%ld", &sno); // Read the second number from the user

    sum = addTwoNumbers(&fno, &sno); // Call the function to add two numbers using call by reference

    printf(" The sum of %ld and %ld is %ld\n\n", fno, sno, sum); // Print the sum of the entered numbers
    return 0;
}

// Function to add two numbers using call by reference
long addTwoNumbers(long *n1, long *n2) {
    long sum;
    sum = *n1 + *n2; // Calculate the sum by dereferencing pointers n1 and n2
    return sum; // Return the sum
}
