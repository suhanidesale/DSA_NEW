#include <iostream>
#include <math.h>
using namespace std;

int binarysearch(int arr[] , int size , int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
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
    int index = binarysearch(num ,size , 6);
    // cout<<"Index is "<<index;

    if (index == -1)
    {
        cout<<" 6 not present"<<endl;
    }
    else
    {
        cout<<"present"<<endl;
    }

    return 0;
    
}