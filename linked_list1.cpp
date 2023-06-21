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


void insertatmiddle(int pos , int data,linkedlist* &head)
{
    // linkedlist* temp = new linkedlist(data);
    linkedlist* temp = head;
    int count = 1;
    while (count < pos-1)
    {
        temp = temp->next;
        count++;
    }

    linkedlist* nodetoinsert = new linkedlist(data);    
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;


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
    insertatmiddle(1,14,head);
    print(head);

}