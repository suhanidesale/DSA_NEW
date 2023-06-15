#include <iostream>
using namespace std;

int power(int n ,int i)
{
    if (n == 0)
    {
        return 1;
    }

    if (n == 1)
    {
        return i;
    }
    

    int smallop = power(n/2,i);

    if(n%2 == 0)
    {
        return smallop*smallop;
    }
    else
    {
        return i*smallop*smallop;
    }
    
}

int main()
{
    int n = 1;
    int i = 3;
    cout<<power(n,i);

}  