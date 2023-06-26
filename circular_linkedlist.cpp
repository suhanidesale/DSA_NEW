#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    
    Node* next;
    Node* prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void deleteele(Node* &tail  , int data){

    Node *prev = tail;
    Node *curr = prev->next;

    while (data != curr->data)
    {
        prev= curr;
        curr = curr->next;
        
    }

    prev->next = curr->next;
      if (tail == curr)
    {
        tail = prev;
    }

    curr->next = NULL;
    delete curr;
   
}

void print(Node* &tail){
    Node* temp = tail;

    do
    {
        cout<<tail->data<<" "; 
        tail = tail->next;
    }while (tail != temp);
    cout<<endl;
    
}



void insert(Node* &tail,int element , int data)
{

//assuming element is present in the list

if(tail == NULL)
{
    Node* newnode = new Node(data);
    tail = newnode;
    newnode-> next = newnode;
}
else
{
    Node* curr = tail;
    while (curr->data != element)
    {
        curr = curr->next;
    }
    Node* temp = new Node(data);

  
    
    temp->next = curr->next;
    
    curr->next = temp;

    
}

}



int main()
{
    // Node* node1 = new Node(10);

    Node* tail = NULL;

    //empty list
    // cout<<"Tail: "<<tail->data<<endl;

    insert(tail,10,11);
    cout<<"Tail: "<<tail->data<<endl;

    insert(tail,11,17);
    print(tail);
    insert(tail,11,19);
    print(tail);
    insert(tail,17,21);
    print(tail);
    cout<<"Tail: "<<tail->data<<endl;
    deleteele(tail,11);
    print(tail);
    cout<<"Tail: "<<tail->data<<endl;
    
}
