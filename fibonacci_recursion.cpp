#include <iostream>
using namespace std;
int fibo(int x)  //recursive function to find fibonacci of nth term
{
    if(x<2)
    {
        return x;  //base case f(0)=0,f(1)=1
    }
    else 
        return fibo(x-1)+fibo(x-2);
}
int main()
{
    int n;
    cout<<"Enter number of terms for fibonacci series: ";
    cin>>n;
    cout<<"Fibonacci series is: ";
    for(int i=0;i<=n;i++)
    {
        cout<<fibo(i)<<" ";
    }
    return 0;
}
