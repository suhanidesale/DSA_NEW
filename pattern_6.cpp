#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i = 1;

    char start = 'A';
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            // char ch = 'A'+j-1;
            cout<<start<<" ";
            j=j+1;
            start= start+1;
        }
        cout<<endl;
        i++;
    }
    
}

