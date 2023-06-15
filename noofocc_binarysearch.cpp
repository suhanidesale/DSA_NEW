#include <iostream>
#include <math.h>
using namespace std;

int firstocc(int arr[] , int n , int key)
{
    int s = 0 , e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            e = mid-1; 
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
         }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastocc(int arr[] , int n , int key)
{
    int s = 0 , e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            s = mid+1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
         }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}





int main()
{
    int size, no;
    cin >> size;

    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
   int index1 = firstocc(arr,size,2);
   int index2 = lastocc(arr,size,2);
   
    cout<<"No of occurences are "<<index2-index1+ 1<<endl;
}