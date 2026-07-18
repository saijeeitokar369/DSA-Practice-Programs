//Task 4:-
// To print both the main diagonal and the secondary diagonal in the same program.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the square matrix order:";
    cin>>n;

    int A[n][n];
    int B[n][n];
    int i,j;

    // cout<<"Enter the elements of the matrix:"<<endl;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cin>>A[i][j];
    //     }
    // }

    cout<<"Enter the Main diagonal matrix:\n"<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
        {
            if(i==j)    //logic for main diagonal
            {
                cout<<A[i][j]<<"";
                //cin>>A[i][j];
            }
        }
    }

    cout<<"Enter the Secondary diagonal matrix:\n"<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
        {
            if(i+j==n-1)    //logic for secondary diagonal
            {
                cout<<B[i][j]<<"";
                //cin>>A[i][j];
            }
        }
    }

    cout<<"Resultant matrix:\n"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << A[i][j] << "+" << B[i][j] << "\t";
        }
        cout<<endl;
    }

    return 0;
}