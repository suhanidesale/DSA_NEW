#include <iostream>
using namespace std;

void sort(int *arr, int n)
{
    if(n == 1 || n == 0)
    {
        return ;
    }
    int i = 0; 
    int min = i;
    // arr[i]= min;
    for (int j = i+1; j < n; j++)
    {
        if (arr[j] < arr[min])
        {
            min = j;
        }
     
        
    }

    swap(arr[i],arr[min]);
    
    sort(arr+1,n-1);
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