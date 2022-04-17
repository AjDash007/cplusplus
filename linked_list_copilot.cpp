// Program for linked list  implementation  
#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
class linked_list   
{
    public:
    struct node *head;
    struct node *tail;
    public:
    linked_list()
    {
        head=NULL;
        tail=NULL;
    }
    void insert_at_end(int);
    void insert_at_begin(int);
    void insert_at_position(int,int);
    void delete_at_end();
    void delete_at_begin();
    void delete_at_position(int);
    void display();
    void reverse();    
};
void linked_list::insert_at_end(int data)
{
    struct node *temp;
    temp = new node;
    temp->data = data;
    temp->next = NULL;
    if(head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}
void linked_list::insert_at_begin(int data)
{
    struct node *temp;
    temp = new node;
    temp->data = data;
    temp->next = NULL;
    if(head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
}
void linked_list::insert_at_position(int data,int position)
{
    struct node *temp,*temp1;
    temp = new node;
    temp->data = data;
    temp->next = NULL;
    temp1 = head;
    if(position == 1)
    {
        temp->next = head;
        head = temp;
    }
    else
    {
        for(int i=1;i<position-1;i++)
        {
            temp1 = temp1->next;
        }
        temp->next = temp1->next;
        temp1->next = temp;
    }
}
void linked_list::delete_at_end()
{
    struct node *temp;
    temp = head;
    if(head == NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else
    {
        while(temp->next != tail)
        {
            temp = temp->next;
        }
        tail = temp;
        tail->next = NULL;
    }
}
void linked_list::delete_at_begin()
{
    struct node *temp;
    temp = head;
    if(head == NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else
    {
        head = temp->next;
        temp->next = NULL;
    }
}
void linked_list::delete_at_position(int position)
{
    struct node *temp,*temp1;
    temp = head;
    if(head == NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else
    {
        if(position == 1)
        {
            head = temp->next;
            temp->next = NULL;
        }
        else
        {
            for(int i=1;i<position-1;i++)
            {
                temp1 = temp;
                temp = temp->next;
            }
            temp1->next = temp->next;
            temp->next = NULL;
        }
    }
}
void  linked_list::display()
{
    struct node *temp;
    temp = head;
    if(head == NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else
    {
        while(temp != NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
}
void linked_list::reverse()
{
    struct node *temp,*temp1;
    temp = head;
    if(head == NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp1 = temp->next;
            temp->next = temp1->next;
            temp1->next = head;
            head = temp1;
        }
    }
}
int main(){
    linked_list l;
    int choice,data,position;
    while(1)
    {
        cout <<"\n";
        cout<<"1.Insert at end"<<endl;
        cout<<"2.Insert at begin"<<endl;
        cout<<"3.Insert at position"<<endl;
        cout<<"4.Delete at end"<<endl;
        cout<<"5.Delete at begin"<<endl;
        cout<<"6.Delete at position"<<endl;
        cout<<"7.Display"<<endl;
        cout<<"8.Reverse"<<endl;
        cout<<"9.Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter the data"<<endl;
                cin>>data;
                l.insert_at_end(data);
                break;
            case 2:
                cout<<"Enter the data"<<endl;
                cin>>data;
                l.insert_at_begin(data);
                break;
            case 3:
                cout<<"Enter the data"<<endl;
                cin>>data;
                cout<<"Enter the position"<<endl;
                cin>>position;
                l.insert_at_position(data,position);
                break;
            case 4:
                l.delete_at_end();
                break;
            case 5:
                l.delete_at_begin();
                break;
            case 6:
                cout<<"Enter the position"<<endl;
                cin>>position;
                l.delete_at_position(position);
                break;
            case 7:
                l.display();
                break;
            case 8:
                l.reverse();
                break;
            case 9:
                exit(0);
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}
