/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    if(n1<n2)
    {
        cout<<n2<<" greater than "<<n1<<endl;
    }
    else
    {
        cout<<n1<<" is the greater number";
    }
    return 0;
}
