#include <iostream>
using namespace std;
int main() {
    int marks;
    cout<<"Enter marks: ";
    cin>>marks;
    if(marks>=90)
    {
        cout<<"Grade = A";
    }
    else if(marks>=80 && marks<90)
    {
        cout<<"Grade = B";
    }
    else
    {
        cout<<"Grade = C";
    }
    return 0;
}