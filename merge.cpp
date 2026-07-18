#include <iostream>
using namespace std;

int main()
{
    int n, m;

    //! Input first array
    cout<<"Enter size the first array: ";
    cin>>n;

    int arr1[n];

    cout<<"Enter the elements of first array: ";
    for(int i=0; i<n; i++)
    {
        cin >> arr1[i];
    } 


    //! Input second array
    cout<<"Enter size the second array: ";
    cin>>m;

    int arr2[m];

    cout<<"Enter the elements of second array: ";
    for(int i=0; i<m; i++)
    {
        cin >> arr2[i];
    } 


    //! Print merge array
    cout<<"Merged array: ";

    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }

    for(int i=0;i<m;i++)
    {
        cout<<arr2[i]<<" ";
    }

    return 0;
}
