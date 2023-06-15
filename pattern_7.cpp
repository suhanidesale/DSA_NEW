#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i = 1;
  

    while (i<=n)
    {
        int j = 1;
        while(j<=i)
        {
        // 'A'+i+j-2 
        char ch = 'A'+i-j;
        cout<<ch<<" ";
        j++;
        }
        cout<<endl;
        i++;
    }
    
}