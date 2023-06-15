#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=n;
 
        while(j>=i)
        {
            cout<<n-j+1;
            j--;
        }
        j=n;
        int spaces=1;
        while(spaces<=2*i-2)
        {
            cout<<"*";
            spaces++;
        }
        while(j>=i)
        {
            cout<<j-i+1;
            j--;
        }

        cout<<endl;
        i+=1;
    }
}