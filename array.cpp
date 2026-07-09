
// Task-1:-
// If there is an array and all elements of the array
// are same 10,10,10,10,10. Perform swapping of index 2 and 3 and display the output.
// Again check for another input 10,10,4,5,10 then output should be 10,10,5,4,10.


#include <iostream>
using namespace std;

int main() {

    int arr1[5] = {10, 10, 10, 10, 10};
    int arr2[5] = {10,10,4,5,10}; 

    //swapping index 2 and 3 for arr1
    int temp1 = arr1[2];
    arr1[2] = arr1[3];
    arr1[3] = temp1;

    //swapping index 2 and 3 for arr2
    int temp2 = arr2[2];
    arr2[2] = arr2[3];      
    arr2[3] = temp2;

    for(int i=0; i<5; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    for(int i=0; i<5; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}