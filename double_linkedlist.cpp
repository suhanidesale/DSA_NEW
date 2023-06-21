#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;

    }
};

void print(Node* &head){
    Node* temp = head;

    while (temp != NULL)
    {
        cout<<temp->data<<" "; 
        temp = temp->next;
    }
    cout<<endl;
    
}

int getlength(Node* head)
{
    int count = 0;
    Node* temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
    
}

void insertathead(Node* &head , Node* &tail , int data)
{
    if (head == NULL)
    {
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;    
    }
    

   

}

void insertattail(Node* &head,Node* &tail,int data)
{
    if (tail == NULL)
    {
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
    Node* temp = new Node(data);
    tail-> next = temp;
    temp->prev = tail;
    tail = temp; 
    }
    


}

void insertatpos(Node* &head ,Node* &tail, int data , int pos)
{
    int count = 1;
    Node *temp = head;

    if (pos == 1)
    {
        insertathead(head,tail,data);
        return;
    }

    while (count < pos-1)
    {
        temp = temp->next;
        count++;
    }

        if (temp->next == NULL)
    {
        insertattail(head,tail,data);
        return;
    }

    Node* nodetoinsert = new Node(data);
    nodetoinsert->next = temp->next; 
    temp->next->prev = nodetoinsert;
    temp->next =nodetoinsert;
    nodetoinsert->prev = temp;

    
}

void deleteatpos(Node* &head , Node* &tail , int pos)
{
    int count = 1;
    if (pos == 1)
    {
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    else
    {
        Node *curr = head;
        Node *prev = NULL;
        while (count < pos)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }
   
    prev->next = curr->next;
    curr->next->prev = prev->next;
    curr->prev = NULL;
    curr->next = NULL;
    delete curr;

       if (prev->next == NULL)
    {
        tail = prev;
    }

    }
    
    

    
}

int main()
{
    // Node* node1 = new Node(10);

    Node* head = NULL;
    Node* tail = NULL;
    print(head);

    insertathead(head,tail,12);
    insertathead(head,tail,13);
    print(head);
    cout<<getlength(head)<<endl;
    insertattail(head,tail,11);
    print(head);
    insertatpos(head,tail,19,2);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    deleteatpos(head,tail,2);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
}
