//program to find ncr
#include <iostream>
using namespace std;
int factN(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int main() 
{
    int n,r;
    cout<<"Enter  the value of n and r: ";
    cin>>n;
    cin>>r;
    double ncr=factN(n)/(factN(r)*factN(n-r));
    cout<<n<<" C "<<r<<" = "<<ncr;
    return 0;
}