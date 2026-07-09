
// Task 3:-
// Write a program to input elements in diagonal and perform 
// in A rest is empty and perform in B there value should be in middle row rest is empty.

#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    int A[n][n], B[n][n];

    // Initialize both matrices with 0
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            A[i][j] = 0;
            B[i][j] = 0;
        }
    }

    // Input only diagonal elements of A
    printf("Enter diagonal elements of Matrix A:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i][i]);
    }

    
    // Display Matrix A
    printf("\nMatrix A:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Display Matrix B
    printf("\nMatrix B:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i == n/2) 
                B[i][j] = 1; 
            else
                B[i][j] = A[i][j] + B[i][j];
            
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Perform addition of A and B
    int C[n][n];
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display the result matrix C
    printf("\nResult Matrix C (A + B):\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}