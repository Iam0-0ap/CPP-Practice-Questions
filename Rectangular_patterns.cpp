                    /*          RECTANGULAR PATTERNS        */

#include<iostream>
using namespace std;


void rectangularPattern(){
 for(int i=0; i<5; i++){
        for (int j= 0; j<4; j++){
            cout<<"*";
        }
        cout<<endl;
    }

}

void hollowRectangle(){
 for(int i=0; i<5; i++){
        for (int j= 0; j<4; j++){
            if (i ==0 || i==4 || j==0 || j== 3){
                cout<<"*";
            }
            else{
                cout<<" ";
        }
        }
        cout<<endl;
 }

}

int main()
{
    rectangularPattern();
    cout<<endl;
    hollowRectangle();
    return 0;
}
