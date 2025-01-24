#include<iostream>
#include<string>
#include <iomanip>
using namespace std;
class Employee
{
    public:
    string name;
    int age;
    string Desg;
    double salary;
    void getdata()
    {
        cout<<"Enter name: ";
        cin.ignore();
        getline (cin, name);
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter designation: ";
        cin.ignore();
        getline (cin, Desg);
        cout<<"Enter salary: ";
        cin>>salary;
    }
    void putdata();
};
void Employee::putdata()
{
    cout<<"Name: "<<name;
    cout<<"\nAge: "<<age;
    cout<<"\nDesignation: "<<Desg<<endl;
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout <<"Salary: "<< salary<<endl;
}
int main()
{
    int n;
    cout<<"Enter number of employees: ";
    cin>>n;
    Employee E[n];
    for(int i=0;i<n;i++)
    {
        E[i].getdata();
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Employee "<<i+1<<":"<<endl;
        E[i].putdata();
        cout<<endl;
    }
    return 0;
}