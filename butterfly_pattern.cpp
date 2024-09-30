//program to print butterfly pattern using nested loop
#include <iostream>
using namespace std;
int main() {
    int n=4;
    //top
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<n+2-i*2;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //bottom
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<i*2;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}