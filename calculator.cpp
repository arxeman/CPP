#include <iostream>
using namespace std;
int main() 
{
    int a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    int sum=a+b;  //addition
    int diff=a-b;  //difference
    int prod=a*b;  //multiplication
    double div=a/b;  //quotient
    int mod=a%b;  //remainder
    cout << "Sum = "<<sum<<endl;
    cout<<"Difference = "<<diff<<endl;
    cout<<"Product = "<<prod<<endl;
    cout<<"Division = "<<div<<endl;
    cout<<"Remainder = "<<mod<<endl;
    return 0;
}
