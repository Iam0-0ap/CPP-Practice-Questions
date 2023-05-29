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
