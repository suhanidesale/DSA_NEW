#include<iostream>
#include<queue>
using namespace std;


class node{
    public:
    int data;
    node* left = NULL;
    node* right = NULL;

    node(int d)
    {
        this->data = d;
        this->left = left;
        this->right = right;
    }

};

node* insertbinary(node *root)
{
    int data;
    cout<<"Enter data"<<endl;
    cin>>data;
    root = new node(data);
    if(data == -1)
    {
        return NULL;
    }

    cout<<"Enter the left node of "<<data<<endl;
    root->left = insertbinary(root->left);
    cout<<"Enter the right node of "<<data<<endl;
    root->right = insertbinary(root->right);
    return root;
}

void buildfromlevelorder(node* &root)
{
    queue<node*> q;
    cout<<"Enter data for root"<<endl;
    int data;

    cin>>data;

    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();

        cout<<"Enter left node for: "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;

        if(leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        cout<<"Enter right node for: "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
    
}

void levelordertraversal(node* root)
{
    queue<node*>q;

    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();
        if(temp == NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }

            if(temp->right)
            {
                q.push(temp->right);
            }
            
        }
        
    }
    

}

void inordertraversal(node* root)
{
    if(root == NULL)
    {
        return ;
    }
    //LNR
    //left
    inordertraversal(root->left);
    cout<<root->data<<" ";
    inordertraversal(root->right);
}

void preordertraversal(node* root)
{
    if(root == NULL)
    {
        return ;
    }
    //LNR
    //left
    cout<<root->data<<" ";
    preordertraversal(root->left);
    preordertraversal(root->right);
}

void postordertraversal(node* root)
{
    if(root == NULL)
    {
        return ;
    }
    //LNR
    //left
    postordertraversal(root->left);
    postordertraversal(root->right);
    cout<<root->data<<" ";
}

int main()
{
    node* root = NULL;
    // root = insertbinary(root);
    // //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // cout<<"level order traversal: "<<endl;
    // levelordertraversal(root);

    // cout<<"Inorder traversal: ";
    // inordertraversal(root);
    // cout<<endl;
    // cout<<"preorder traversal: ";
    // preordertraversal(root);
    // cout<<endl;
    // cout<<"postorder traversal: ";
    // postordertraversal(root);
    // cout<<endl;
    // return 0;

    buildfromlevelorder(root);

    levelordertraversal(root);
}