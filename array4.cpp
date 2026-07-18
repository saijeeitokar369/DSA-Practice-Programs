//Diagonal elemenets of matrix

#include <iostream>
using namespace std;

int main()
{
    int a[3][3];
    int rows=3,cols=3;
    int i,j;

    cout<<"Enter elements:\n";

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Main Diagonal: ";

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(i==j)
                cout<<a[i][j]<<" ";
        }
    }

    cout<<"\nSecondary Diagonal: ";

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(i+j==cols-1)
                cout<<a[i][j]<<" ";
        }
    }

    return 0;
}