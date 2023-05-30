#include<iostream>
using namespace std;


void invHalfPyramid()
{
    for (int i=5; i>0; i--){
        for(int j= 0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void HalfPyramid()
{
    for (int i= 0; i<5; i++){
        for(int j =0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void rightHalfPyramid()
{
     for (int i= 0; i<5; i++){
        for(int j =0; j<=5; j++){
            if(j<5-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

void rightInvHalfPyramid()
{
     for (int i= 5; i>0; i--){
        for(int j =0; j<5; j++){
            if(j<5-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

void butteryflyPattern()
{
    for(int i; i<=4; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        int space =  8-2*i;
        for (int j=1; j<=space; j++){
                cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }

        cout<<endl;
    }
    for(int i=4; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        int space =  8-2*i;
        for (int j=1; j<=space; j++){
                cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }

        cout<<endl;
    }
}



int main()
{
    cout<<"-------------Half Pyramid----------------------------"<<endl;
    HalfPyramid();
    cout<<endl;

    cout<<"-------------Inverted Half Pyramid----------------------------"<<endl;
    invHalfPyramid();
    cout<<endl;

    rightHalfPyramid();
    cout<<endl;

    cout<<"-------------Right Inverted Half Pyramid----------------------------"<<endl;
    rightInvHalfPyramid();
    cout<<endl;

    cout<<"-------------Butterfly Pattern----------------------------"<<endl;
    butteryflyPattern();


    return 0;
}
