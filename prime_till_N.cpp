//program to printr all prime numbers between 1 and n
#include <iostream>
using namespace std;
int isPrime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main() 
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Prime numbers between  1 and "<<n<<" are: "<<endl;
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i)==1)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}