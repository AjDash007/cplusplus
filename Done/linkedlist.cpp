#include <iostream>
#include<vector>
using namespace std;

class node{
    public:
        int data;
        node* next;
      node(){
			next = NULL;
		}
};

class LinkedList{
	node *head;
	public:
		
		LinkedList(){
			head = NULL;
		}
        void insert_at_beginning(int v){
			node *temp = new node();
			temp->data = v;
			temp->next = head;
			head = temp;
		}
        void print(){
			if (head == NULL){
				cout <<"List is empty"<<endl;
			}
			else{
				node *temp = head;
				cout <<"Linked List: ";
				while (temp != NULL){
					cout<<temp->data<<"->";
					temp = temp->next;
				}
				cout<<"NULL"<<endl;
			}
		}	
		void insert_at_end(int v){
			node *temp = new node();
			temp->data = v;
			if(head==NULL){
				head = temp;
				return;
			} 
			node *ptr; //new pointer to traverse 
			ptr = head; //since head is not empty 
			if(ptr->next != NULL)
			 ptr = ptr->next; // traverse 
			ptr-> next = temp;
		}
		void insert_at_given_position(int v, int p){
			node *temp = new node();
			temp->data = v;
			if(p==0){
				temp->next = head;
				head = temp;				
			}
			else {     
			node *ptr;
			ptr = head;
			while((p--)>1)
			  ptr = ptr->next;  //traverse
			temp->next = ptr->next;
			ptr->next = temp;
			}
		}
};

//Simple driver function
int main(){
    LinkedList ll;
    int choice,v,p;
    cout<<"Enter the element you want to put in list : ";
    cin>>v;
    ll.insert_at_beginning(v);
    cout<<"Enter the element you want to put in list : ";
    cin>>v;
    ll.insert_at_beginning(v);
	cout<<"Enter the element you want to put in list : ";
    cin>>v;
	ll.insert_at_end(v);
    ll.print();
	ll.insert_at_given_position(420,2);
	ll.print();
}

		

