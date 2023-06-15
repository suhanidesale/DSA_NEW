#include <iostream>
#include <math.h>
using namespace std;

void printarray(int num[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<num[i]<<" ";
    }
 cout<<endl;   
}

void sort0s(int num[], int n)
{
    int i=0; 
    int j = n-1;
    while (i < j)
    {
        if (num[i] ==  0)
        {
            i++;
        }
        if (num[j] == 1)
        {
           j--;
        }
        if (num[i] == 1 || num[j] == 0)
        {
            swap(num[i],num[j]);
            i++;
            j--;
        }   
    }
    
}

int main()
{
    int size, no;
    cin >> size;

    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    printarray(num,size); 
    sort0s(num,size);
    cout<<"After sorting: "<<endl;
    printarray(num,size); 
}