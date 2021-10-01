//Linked List 
#include <iostream>
using namespace std;

class node {
    public:
    int v;    //data
    node* next;
    node(){   // Initializer 
        next = NULL;
    }
};
class Linked_List{
   public:
   node* head;
    Linked_List(){
        head = NULL;
    }
   void add_node_to_front(int v);
   void print_list();
   void add_node_to_back(int v);
   void remove_node_from_front();
   void remove_node_from_back();
   void insert_node_at_pos(int v, int pos);
};
//Definations of the class functions , methods 
void Linked_List::add_node_to_front(int v){
    node* temp = new node();
    temp->v = v;
    temp->next = head;
    head = temp;
}
void Linked_List::print_list(){
    if(head==NULL)
    {
      cout << "Empty List !!" <<endl;
    }
    node* temp = head;
    while(temp!=NULL)
     {
       cout<<temp->v<<"-->";
       temp = temp->next;
     }
     if(temp==NULL)
      cout<<"NULL"<<endl;
}
void Linked_List::add_node_to_back(int v){
    node* temp = new node();
    temp->v = v;
    node* ptr;
    ptr = head;
    while(ptr->next != NULL)
       ptr=ptr->next;
    ptr->next = temp; 
}
void Linked_List::remove_node_from_front(){
    node * ptr;
    ptr = head;
    head = head->next;
    free(ptr); 
}
void Linked_List::insert_node_at_pos(int v, int pos){
    node * temp = new node();
    temp ->v = v;
    node* ptr;
    ptr = head;
    if(pos==0)
     add_node_to_front(v);
    for(int i=0;i <= pos; i++ ){
        ptr=ptr->next;
        if(ptr == NULL){
         cout << "The postion is higher then the length of the list " << endl;
         break;
        }
        if(i == pos){
            temp->next = ptr->next;
            ptr->next = temp;
        }
    }       
}
int main(){
    Linked_List ll;
    int v;
    cout<<"This is the list at very start !!"<<endl;
    ll.print_list();
    cout<<"Enter an integer to add to list  ";
    cin>>v;
    ll.add_node_to_front(v);
    ll.print_list();
    cout<<"Enter an integer to add to list  ";
    cin>>v;
    ll.add_node_to_front(v);
    ll.print_list();   
    cout<<"Enter an integer to add to list  ";
    cin>>v;
    ll.add_node_to_back(v);
    ll.print_list();   
    ll.remove_node_from_front();
    ll.print_list();
    ll.insert_node_at_pos(20,0);
    ll.print_list();
    ll.insert_node_at_pos(222,2);
    ll.print_list();
    ll.insert_node_at_pos(444,4);
    ll.print_list();
    return 0;
}
    

