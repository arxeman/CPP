#include <iostream>
using namespace std;
int main() 
{
    int a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    int sum=a+b;
    int diff=a-b;
    int prod=a*b;
    double div=a/b;
    int mod=a%b;
    cout << "Sum = "<<sum<<endl;
    cout<<"Difference = "<<diff<<endl;
    cout<<"Product = "<<prod<<endl;
    cout<<"Division = "<<div<<endl;
    cout<<"Remainder = "<<mod<<endl;
    return 0;
}