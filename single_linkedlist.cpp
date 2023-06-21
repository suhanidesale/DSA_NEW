#include <iostream>
using namespace std;


class linkedlist
{
    public:
    int data = 10;
    linkedlist *next = NULL;

    linkedlist(int  data)
    {
        this-> data = data;
        this-> next = NULL;
    }

    //destructor to relase the memory
    // ~linkedlist()
    // {
    //     int value = this->data;
    //     if(this->next != NULL)
    //     {
    //         delete next;
    //         this->next = NULL;
    //     }
    //     cout<<"Memory free for data "<<value<<endl; 
    // }
};

void insertatend(linkedlist* &tail , int data)
{
    linkedlist* temp = new linkedlist(data);
    tail-> next = temp;
    tail = temp;
    // tail = tail->next;
}

void insert(linkedlist* &head , int data)
{
    linkedlist* temp = new linkedlist(data);
    temp->next = head;
    head = temp;
}


void insertatmiddle(int pos , int data,linkedlist* &head , linkedlist* &tail)
{
    // linkedlist* temp = new linkedlist(data);
    linkedlist* temp = head;
    int count = 1;

    if (pos == 1)
    {
        insert(head,data);
        return;
    }
    
    while (count < pos-1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertatend(tail,data);
        return;
    }
    
    linkedlist* nodetoinsert = new linkedlist(data);    
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;


}

void deleteatpos(linkedlist* &head,linkedlist* &tail , int pos)
{
    if (pos == 1)
    {
        linkedlist* temp = head;
        head = head->next; //age badho
        temp->next = NULL;
        delete temp; //free the memory
    }
    else
    {
    linkedlist* current = head;
    linkedlist* previous = NULL;
    int  count = 1;
    while (count <  pos)
    {
        previous = current;
        current = current->next;
        // previous = previous->next;
        count++;
    }
    previous->next = current->next;
    current->next = NULL;
    delete current; 
    if (previous->next == NULL)
    {
        tail = previous;
    }
    
    }
    
    

    
    
}

void print(linkedlist* &head)
{
    linkedlist* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}



int main()
{
    linkedlist* node1 = new linkedlist(10);

    cout<<node1 -> data<<endl;
    cout<<node1 -> next<<endl;
    linkedlist* head = node1;
    linkedlist* tail = node1;
    // print(head);
    // // insert(head ,12);
    // print(head);
    print(head);
    insertatend(tail , 11);
    insertatend(tail , 12);
    print(head);
    insertatmiddle(4,19,head,tail);
    print(head);
    insertatend(tail,13);
    print(head);
    deleteatpos(head,tail,5);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

}