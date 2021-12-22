/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int P;
    float rate,time,si;
    cout<<"Enter the Principal amount: ";
    cin>>P;
    cout<<"Enter the rate: ";
    cin>>rate;
    cout<<"Enter the time: ";
    cin>>time;
    si = P * rate * time;
    cout<<"Simple Interest "<<si<<endl;
    return 0;
}
