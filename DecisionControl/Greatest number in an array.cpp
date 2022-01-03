/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n1, max=0;
    cout<<"Enter a number: ";
    cin>>n1;
    int array[n1];
    for(int i = 0; i < n1 ; i++ )
    {
        cout<<"\nEnter the "<<(i+1)<<" number:";
        cin>>array[i];
    }
    
    for(int i=0;i<n1 ; i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
    }
    
    cout<<max<<" is the biggest number in the array";
    
    return 0;
}
