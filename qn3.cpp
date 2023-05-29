/*                          QN.3

Write a function that accepts a character array, a zero-based start position and a length. It should return a character array containing
lengthcharacters starting with the startcharacter of the input array. The function should do error checking on the start position and the
length and return null if the either value is not legal.
    The function signature is:
    char[ ] f(char[ ] a, int start, int len)

Examples
if input parameters are	then return:
{‘a’, ‘b’, ‘c’}, 0, 4 -->	null
{‘a’, ‘b’, ‘c’}, 0, 3 -->	{‘a’, ‘b’, ‘c’}

*/
#include<iostream>
using namespace std;

char* f(char a[], int start, int len)
{
    if (len<0 || start<0 || start+len-1 >= sizeof(a))
        return nullptr;

    char* result = new char[len];
    for(int i= start, j =0; j<len; i++, j++)
        result[j] = a[i];
    return result;

}

int main(){
    char  a[]={'a','b','c'};
    int start,len;

    cout<<"Enter the start point";
    cin>>start;

    cout<<"Enter the length";
    cin>>len;

    char* output = f(a,start,len);

    if (output == 0){
        cout<<"Null";
    }
    else{
        cout<<"Result: "<<output<<endl;
    }

    return 0;

}
