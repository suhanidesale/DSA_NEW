#include <iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if(size - top > 1)
        {
            top++;
        arr[top] = element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
        
    }

    void pop()
    {
        if(top >= 0)
        {
            top--;
        }
        else
        {
            cout<<"Stack Underflow"<<endl;
        }
        
    }

    int peek()
    { 
        if(top >= 0 && top < size)
        {
            return arr[top];
        }else{
            cout<<"Stack is empty"<<endl;
        }
    }

    bool isempty()
    {
        if(top == -1)
        {
            return true;
        }
        else{
            return false;
        }
    }

    void print()
{
    top = 0; 
        while (top < top-size)
        {
        cout<<arr[top]<<" ";
        top++;
            /* code */
        }
        
    }
};

int main()
{
   Stack st(5);
   st.push(5);
   st.push(11);
   st.push(13);

    cout<<st.peek()<<endl;
    st.print();
}