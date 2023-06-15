#include <iostream>
using namespace std;

void merge(int *arr , int s , int e)
{
    int mid = (s+e)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;

    int *arr1 = new int[len1]; 
    int *arr2 = new int[len2]; 

    int mainArrayIndex = s;

    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }
    mainArrayIndex = mid+1;
    for (int j = 0; j < len2; j++)
    {
        arr2[j] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (arr1[index1] < arr2[index2])
        {
            arr[mainArrayIndex] = arr1[index1];
            mainArrayIndex++;
            index1++;
        }
        else
        {
            arr[mainArrayIndex] = arr2[index2];
            mainArrayIndex++;
            index2++;
        }
        
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex] = arr1[index1];
        mainArrayIndex++;
        index1++;
    }
    while (index2 < len2)
    {
        arr[mainArrayIndex] = arr2[index2];
        mainArrayIndex++;
        index2++;
    }
    
    
    
    
}

void sort(int *arr, int s,int e)
{
   if (s >= e)
   {
    return ;
   }

   int mid = (s + e)/2;
   sort(arr,s,mid);
   sort(arr,mid+1,e);

    merge(arr , s , e);
   
}
int main()
{
    int arr[5] = {2,5,1,6,9};

    sort(arr,0,5);

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}