#include <iostream>
using namespace std;

int sum_arr(int *arr , int size){
    if(size == 0){
        return 0;
    }

    if(size == 1)
    {
        return *arr;
    }

    int sum = arr[0] + sum_arr(arr+1,size-1);
    return sum;
}


int main()
{
   int arr[5] = {2,10,6,8,9};
   int size = 5;

    cout<<sum_arr(arr,size);
  
    
}