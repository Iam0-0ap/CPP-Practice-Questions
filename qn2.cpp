/*                                                QN. 2
Write a function that takes an array of integers as an argument and returns a value based on the sums of the even and odd numbers in the array.
Let X = the sum of the odd numbers in the array and let Y = the sum of the even numbers. The function should return X – Y
*/

#include<iostream>
using namespace std;

int sum(int arr[], int N){
    int x=0, y=0;
    for (int i = 0; i<N; i++)
        if (arr[i]%2 == 0)
            y= y + arr[i];
        else
            x = x + arr[i];

    return (x-y);

}
int main()
{
    int N, result;
    cout<<"Enter the size of an array:"<<endl;
    cin>>N;

    int arr[N];
    cout<<"Enter the elements of array:"<<endl;
    for (int i=0; i<N; i++){
        cin>>arr[i];
    }
    result = sum(arr, N);
    cout<<result;
    return 0;

}


