#include <iostream>
using namespace std;
int main() {
    char ch;
    cout<<"Enter char: ";
    cin>>ch;
    if(ch>= 97&& ch<=122)
    {
        cout<<"Lower case";        
    }
    else
    {
        cout<<"Upper case";
    }
    return 0;
}