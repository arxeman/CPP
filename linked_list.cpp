#include <iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node* next;
        Node(int val)
        {
            data=val;
            next=NULL;
        }
};
class List
{
    Node* head;
    Node* tail;
    public:
        List()
        {
            head=tail=NULL;
        }
        void push_front(int val)
        {
            Node* newNode=new Node(val);  //dynamically allocate memory for new node
            if(head==NULL)
            {
                head=tail=newNode;  //if list is empty, set head and tail to new node
                return;
            }
            else
            {
                newNode->next=head;
                head=newNode;  //insert new node at the front of the list
            }
        }
        void push_back(int val)
        {
            Node* newNode=new Node(val);
            if(head==NULL)
            {
                head=tail=newNode;  //if list is empty, set head and tail to new node
                return;
            }
            else
            {
                tail->next=newNode;
                tail=newNode;  //insert new node at the end of the list
            }
        }
        void pop_front()
        {
            if(head==NULL)
            {
                cout<<"List is empty"<<endl;
                return;
            }
            else
            {
                Node* temp=head;
                head=head->next;  //remove the first node from the list
                temp->next=NULL;
                delete temp;  //free memory of the removed node
            }
        }
        void pop_back()
        {
            if(head==NULL)
            {
                cout<<"List is empty"<<endl;
                return;
            }
            else
            {
                Node* temp=head;
                while(temp->next!=tail)
                {
                    temp=temp->next;  //traverse to the second last node
                }
                temp->next=NULL;  //remove the last node from the list
                delete tail;  //free memory of the removed node
            }
        }
        void insert(int val, int pos)
        {
            if(head==NULL)
            {
                cout<<"List is empty"<<endl;
                return;
            }
            if(pos==0)
            {
                push_front(val);  //insert at the front of the list
                return;
            }
            else
            {
                Node* temp=head;
                for(int i=0;i<pos-1;i++)
                {
                    if(temp->next==NULL)
                    {
                        cout<<"Position out of bounds"<<endl;
                        return;  //if position is out of bounds, return
                    }
                    temp=temp->next;  //traverse to the position before the desired position
                }
                Node* newNode=new Node(val);  //dynamically allocate memory for new node
                newNode->next=temp->next;  //insert new node at the desired position
                temp->next=newNode;  //link the new node to the list
            }
        }
        int search(int key)
        {
            Node* temp=head;
            int index=0;
            while(temp!=NULL)
            {
                if(temp->data==key)
                {
                    return index;  //return the index of the found node
                }
                temp=temp->next;  //traverse the list
                index++;  //increment index
            }
            return -1;
        }
        void printLL()
        {
            Node* temp=head;
            while(temp!=NULL)
            {
                cout<<temp->data<<"->";
                temp=temp->next;  //traverse the list and print each node's data
            }
            cout<<"NULL"<<endl;
        }
};
int main()
{
    List l;
    loop:
    cout<<"MENU:"<<endl;
    cout<<"1. Push Front"<<endl;
    cout<<"2. Push Back"<<endl;
    cout<<"3. Pop Front"<<endl;
    cout<<"4. Pop Back"<<endl;
    cout<<"5. Insert"<<endl;
    cout<<"6. Search"<<endl;
    cout<<"7. Print"<<endl;
    cout<<"8. Exit"<<endl;
    int choice, val, pos;
    cout<<"Enter choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"Enter value to push front: ";
            cin>>val;
            l.push_front(val);
            break;
        case 2:
            cout<<"Enter value to push back: ";
            cin>>val;
            l.push_back(val);
            break;
        case 3:
            l.pop_front();
            break;
        case 4:
            l.pop_back();
            break;
        case 5:
            cout<<"Enter value and position to insert: ";
            cin>>val>>pos;
            l.insert(val, pos);
            break;
        case 6:
            cout<<"Enter value to search: ";
            cin>>val;
            pos=l.search(val);
            if(pos==-1)
                cout<<"Value not found"<<endl;
            else
                cout<<"Value found at index "<<pos<<endl;
            break;
        case 7:
            l.printLL();
            break;
        case 8:
            cout<<"Exiting program"<<endl;
            exit(0);
        default:
            cout<<"Invalid choice"<<endl;
    }
    goto loop;  //go back to the menu after each operation
    return 0;
}