#include<iostream>
using namespace std;

bool linearsearch(int num[] , int n , int no)
{
    for (int i = 0; i < n; i++)
    {
       if (num[i] == no)
       return true;
    }
    return false;
    

}

int main()
{
    int size , no;
    cin>>size;

    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout<<num[i]<<" ";
    }
    
    cout<<endl;

    cout<<"Enter the no you want to be searched: "<<endl;
    cin>>no;

    if(linearsearch(num,size,no))
    {
        cout<<no<<" is present"<<endl;
    }
    else
    {
        cout<<no<<"  not present"<<endl;
    }
    
}