#include <iostream>
using namespace std;

void sort(int *arr, int n)
{
    if(n == 1 || n == 0)
    {
        return ;
    }
    int i , j , key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i-1;


        if (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }

        arr[j+1] = key;
        
    sort(arr,n-1);
    }

    
}
int main()
{
    int arr[5] = {2,5,1,6,9};

    sort(arr,5);

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}