// #include <iostream>
// #include <math.h>
// using namespace std;

// int pivot(int arr[] , int n )
// {
//     int s = 0 ;
//     int e = n-1;
//     int mid = s + (e-s)/2;
//     int ans = -1;
   
//     while(s<=e)
//     {
//         if(arr[mid] <= key)
//         {
//           s = mid+1;
//         }
//         else if (arr[mid] == key)
//         {
//             return mid;
//         }
        
//         else
//         {
//             e = mid ;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
// }


// int main()
// {
//     int size, no;
//     cin >> size;

//     int arr[100];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
// //    int index1 = pivot(arr,size);
   
   
//     cout<<"Pivot element index is "<<pivot(arr,size)<<endl;
// }