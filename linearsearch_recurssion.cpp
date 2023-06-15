#include <iostream>
using namespace std;

bool sum_arr(int *arr , int size , int i){
    if(size == 0)
    {
        return false;
    }

    if(*arr == i){
        return true;
    }
    else
    {
        
        return sum_arr(arr+1,size-1,i);
    }
    
}


int main()
{
   int arr[5] = {2,10,6,8,9};
   int size = 5;
   int i = 10;
 
    bool ans = sum_arr(arr,size,i);

    if(ans){
        cout<<"Present"<<endl;
    }
    else
    {
        cout<<"Absent"<<endl;
    }
    
  
    
}