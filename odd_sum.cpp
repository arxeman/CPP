#include <iostream>
using namespace std;
int main() {
    int oddSum=0,n=10;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<" ";
            oddSum+=i;
        }
    }
    cout<<"\nSum of odd numbers = "<<oddSum;
    return 0;
}