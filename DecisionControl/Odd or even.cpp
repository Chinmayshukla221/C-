/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    if(number%2==0)
    {
        cout<<number<<" is a even number";
    }
    else
    {
        cout<<number<<" is a odd number";
    }
    return 0;
}
