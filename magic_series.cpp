#include<iostream>
using namespace std;

void fibonacci(int n)
{
    int a=0,b=1,c=0;
    cout<<"Fibonacci Series: "<<a<<","<<b<<",";

    c = a+b;
    while (c<=n)
    {
        cout<<c<<",";
        a=b;
        b=c;
        c=a+b;
    }
    return;
}

void triangular_numbers(int n)
{
    int c=0;
    cout<<"Triangular Series: "<<c<<",";
    for(int i=1; i<=n; i++)
    {
        c= i*(i+1)*0.5;
        cout<<c<<",";
    }
    return;
}

void lucas_series(int n)
{
    int a=2,b=1,c=0;
    cout<<"Lucas Series: "<<a<<","<<b<<",";

    c= a+b;
    while (c<=n){
        cout<<c<<",";
        a=b;
        b=c;
        c=a+b;
    }
    return;
}

int main()
{
    int n;
   cout<<"Enter a positive number: "<<endl;
    cin>>n;
    fibonacci(n);
    cout<<endl<<endl;
    triangular_numbers(n);
    cout<<endl<<endl;
    lucas_series(n);
    return 0;

}

