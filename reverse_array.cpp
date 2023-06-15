#include<iostream>
#include<math.h>
using namespace std;

void printarray(int num[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<num[i]<<" ";
    }
 cout<<endl;   
}

void reversearray(int num[] , int n ){
   int start = 0;
   int end = n-1; 
   while (start <= end)
   {
    swap(num[start],num[end]);
    start ++;
    end --;
   }
   
   
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
  
    printarray(num,size); 
    reversearray(num,size);
    cout<<"After reversal: ";
    printarray(num,size); 
    
}