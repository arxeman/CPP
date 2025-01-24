#include <iostream>
using namespace std;
class Room
{
    private:
    int len;
    int breadth;
    int height;
    public:
    void calcArea(int len,int breadth)
    {
        int area=len*breadth;
        cout<<"Area of room is: "<<area<<" square units"<<endl;
    }
    void calcVol(int len,int breadth,int height)
    {
        int vol=len*breadth*height;
        cout<<"Volume of room is: "<<vol<<" cubic units"<<endl;
    }
};
int main()
{
    int roomLen;
    int roomBreadth;
    int roomHeight;
    cout<<"Enter lenght of room: ";
    cin>>roomLen;
    cout<<"Enter breadth of room: ";
    cin>>roomBreadth;
    cout<<"Enter height of room: ";
    cin>>roomHeight;
    Room myRoom;  //object creation
    myRoom.calcArea(roomLen,roomBreadth);  //function calling
    myRoom.calcVol(roomLen,roomBreadth,roomHeight);
    return 0;
}