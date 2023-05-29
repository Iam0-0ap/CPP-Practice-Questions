/*                                  QN. 4

Write a function to reverse an integer using numeric operators and without using any arrays or other data structures.
The signature of the function is:
int f(int n)
*/

#include<iostream>
using namespace std;

int f(int n)
{
    int result =0;
    while (n!=0){
        int last_digit=n%10;
        result = (result*10)+ last_digit;
        n= n/10;
    }
    return result;

}


int main()
{
    int n;
    cout<<"Enter the integer"<<endl;
    cin>>n;

    int reversed = f(n);
    cout<<"Reversed integer"<<reversed<<endl;
    return 0;
}
