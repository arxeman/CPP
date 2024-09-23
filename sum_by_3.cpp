#include <iostream>
using namespace std;
int main() {
    int sum=0,n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Numbers between 1 and "<<n<<" divisible by 3 = ";
    for(int i=1;i<=n;i++)
    {
        if(i%3==0)
        {
            cout<<i<<" ";
            sum+=i;
        }
    }
    cout<<"\nSum = "<<sum;
    return 0;
}