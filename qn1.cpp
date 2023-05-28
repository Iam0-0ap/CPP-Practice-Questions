
/*                                  QUESTION 1

An array with an odd number of elements is said to be centered if all elements (except the middle one)
are strictly greater than the value of the middle element. Note that only arrays with an odd number of
elements have a middle element. Write a function that accepts an integer array and
returns 1 if it is a centered array, otherwise it returns 0. */



#include<iostream>
using namespace std;

int isCentered(int arr[], int size_of_array){
    if (size_of_array % 2 == 0){
        return 0;
    }
    int mid = size_of_array / 2;
    int middleElement = arr[mid];

    for (int i = 0; i< size_of_array ; i++){
        if (i!= mid && arr[i]<= middleElement){
            return 0;
    }
    }
    return 1;
}

int main(){

    int N;
    cout<<"Enter the size of array"<<endl;
    cin>>N;

    int arr[N];
    cout<<"Enter the elements of array"<<endl;
    for(int i =0; i<N ; i++)
        cin>>arr[i];

    int result= isCentered(arr, N);
    if (result == 1)
        cout<<"The array is centered (1)";
    else
        cout<<"The array is not centered (0) ";

return 0;
}




