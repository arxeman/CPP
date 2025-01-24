#include <iostream>
using namespace std;
int main()
{
    int sub;
    float marks,avg,total=0;
    cout<<"Enter the number of subjects: ";
    cin>>sub;
    for(int i=0;i<sub;i++)
    {
        cout<<"Enter the marks of subject "<<i+1<<": ";
        cin>>marks;
        total+=marks;
    }
    avg=total/sub;
    cout<<"Average marks: "<<avg<<endl;
    return 0;
}