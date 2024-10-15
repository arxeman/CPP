#include <iostream>
using namespace std;
void prime(int n)
{
    int count=0;
    if(n<=1)
    {
        cout<<"Not a prime number";
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        cout<<"Prime";
    }
    else
    {
        cout<<"Not a prime";
    }
    return;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    prime(n);   
    return 0;
}