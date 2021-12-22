/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    float avg;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    avg = (a * b * c)/3;
    cout<<"Average of the entered number is "<<avg<<endl;
    return 0;
}
