#include <stdio.h>

int main()
{
    int* ab; // Declare a pointer variable ab
    int m;   // Declare an integer variable m

    m = 29; // Assign the value 29 to the variable m

    printf("\n\n Pointer : How to handle the pointers in the program :\n");
    printf("------------------------------------------------------------\n");
    printf(" Here in the declaration ab = int pointer, int m = 29\n\n");

    printf(" Address of m : %p\n", &m); // Print the address of variable m
    printf(" Value of m : %d\n\n", m); // Print the value of variable m

    ab = &m; // Assign the address of m to the pointer variable ab

    printf(" Now ab is assigned with the address of m.\n");
    printf(" Address of pointer ab : %p\n", ab);      // Print the address stored in pointer ab
    printf(" Content of pointer ab : %d\n\n", *ab);   // Print the value pointed to by ab

    m = 34; // Assign the value 34 to the variable m

    printf(" The value of m assigned to 34 now.\n");
    printf(" Address of pointer ab : %p\n", ab);      // Print the address stored in pointer ab
    printf(" Content of pointer ab : %d\n\n", *ab);   // Print the value pointed to by ab

    *ab = 7; // Assign the value 7 to the variable pointed by ab

    printf(" The pointer variable ab is assigned the value 7 now.\n");
    printf(" Address of m : %p\n", &m);               // Print the address of variable m
                                                      // as ab contains the address of m
                                                      // *ab changed the value of m and now m becomes 7
    printf(" Value of m : %d\n\n", m);                // Print the value of variable m

    return 0;
}
