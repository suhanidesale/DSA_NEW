#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;

    while (i<=n)
    {
        int j = 1;
        while (j<=n-i+1)
        {
           cout<<j;
           j++;
        }

        int start = i-1;
      
        while(start)
        {
            cout<<"*";
            start=start-1;
        }
        
        j=n;
        while (j>=i)
        {
            cout<<j-i+1;
            j=j-1;
        }
      
        cout<<endl;
        i = i+1;
        
    }
    
}