#include <iostream>
using namespace std;

int partion(int *arr , int s , int e)
{
    int count = 0;
    int pivot = arr[s];

    for (int i = s+1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    int pivotIndex = s+count;

    swap(arr[s],arr[pivotIndex]);
    int i = s;
    int j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] <= arr[pivotIndex])
        {
            i++;
        }
        while (arr[j] > arr[pivotIndex])
        {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++],arr[j--]);
        }

    }
    
return pivotIndex;    
}

void quicksort(int *arr , int s , int e)
{
    if (s >= e)
    {
        return ;
    }

    int p = partion(arr , s , e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
    
}

int main()
{
    int arr[5] = {2,5,1,6,9};

    quicksort(arr,0,5);

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

}