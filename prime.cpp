#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool isPrime=true;
    for(int i=2;i*i<=n;i++)  //square root of n
    {
        if(n%i==0)
        {
            isPrime=false;
            break;
        }
    }
    if(isPrime==true)
    {
        cout<<n<<" is a prime number";
    }
    else
    {
        cout<<n<<" is not a prime number";
    }
    return 0;
}