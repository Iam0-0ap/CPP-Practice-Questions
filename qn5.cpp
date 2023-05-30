/*                                  QN.5

Consider an array A with n of positive integers. An integer idx is called a POE (point of equilibrium) of A,
if A[0] + A[1] + … + A[idx – 1] is equal to A[idx + 1] + A[idx + 2] + … + A[n – 1].
Write a function to return POE of an array, if it exists and -1 otherwise.

if the input arrays are then return:
{1, 8, 3, 7, 10, 2}	---> 3 Reason: a[0] + a[1] + a[2] is equal to a[4] + a[5]
{1, 5, 3, 1, 1, 1, 1, 1, 1}	----> 2 Reason: a[0] + a[1] is equal to a[3] + a[4] + a[5] + a[6] + a[7] + a[8]
{3, 4, 5, 10} ---->	-1 Reason: No POE.
*/

#include<iostream>
using namespace std;

int findPOE(int x[], int Size){
 int sum=0;
    for(int i =0; i<Size; i++)
        sum+=x[i];

    int leftSum =0;

    for (int i=0; i<Size; i++){
        sum = sum-x[i];

        if(leftSum == sum){
            return i;
        }
        leftSum += x[i];
    }
    return -1;
}
int main()
{
    int x[] = {3, 4, 5, 10};
    int Size = sizeof(x)/sizeof(x[0]);

    int POE = findPOE(x,Size);

    if (POE !=-1)
        cout<<"Point of Equilibrium found at index: "<<POE;
    else
        cout<<"Point of Equilibrium not found";

    return 0;
}
