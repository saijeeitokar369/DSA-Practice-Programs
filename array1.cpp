// Task 2:-
// WAP to input characters in  the 2-D array in three cross three matrix.  Take another matrix B store integer value.
// Now perform addition of A and B when A is a character array and B is a integer array.

#include <iostream>
using namespace std;

int main()
{
    char A[3][3];
    int B[3][3];
    int i, j;

    cout << "Enter 9 characters:" << endl;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Enter 9 integers:" << endl;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cin >> B[i][j];
        }
    }

    cout << "\nResult:" << endl;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout << A[i][j] << "+" << B[i][j] << "\t";
        }
        cout << endl;
    }
}

