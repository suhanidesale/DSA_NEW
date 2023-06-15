#include<iostream>
using namespace std;

int maxarr(int num[] , int n){
    int max = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
           max = num[i];
        }
        
    }
    return max;
}

int minarr(int num[] , int n){
    int min = INT32_MAX;
    for (int j = 0; j < n; j++)
    {
        if (num[j] < min)
        {
           min = num[j];
        }
    }
    return min;
}



int main()
{
    int size;
    cin>>size;

    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;

    cout<<"Min "<<minarr(num,size)<<endl;
    cout<<"Max "<<maxarr(num,size)<<endl;


    
}