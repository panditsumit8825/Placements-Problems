#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;

    // int sortArr(vector<int>& arr){
    //     sort(arr.begin(),arr.end());
    //     return arr.back(               );
    // }
// int main(){
//     vector<int> arr1={3, 3, 6, 1};
//     vector<int> arr2={3, 3, 0, 99, -40};
//     cout<<sortArr(arr1)<<" is the largest element in the array"<<endl;
//     cout<<sortArr(arr2)<<" is the largest element in the array"<<endl;
//     return 0;
// }

// M - 2

int main(){
    // vector<int> arr1={3, 3, 6, 1};
    // vector<int> arr2={3, 3, 0, 99, -40};
    // cout<<sortArr(arr1)<<" is the largest element in the array"<<endl;
    // cout<<sortArr(arr2)<<" is the largest element in the array"<<endl;

    int arr1[]={3, 3, 0, 99, -40};
    int size=sizeof(arr1)/sizeof(int);
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        // if (arr1[i] < INT_MAX)
        // {
        //     min = arr1[i];
        // }
        for (int j = 1; j < size; j++)
        {
            if (arr1[i]>arr1[j])
            {
                // cout<<arr1[i]<<" is the largest element in the array"<<endl;
            }
            cout<<arr1[i]<<" is the largest element in the array"<<endl;
        }
        // cout<<arr1[i]<<" is the largest element in the array"<<endl;
    }
    // cout<<arr1[i]<<" is the largest element in the array"<<endl;
    // cout<<min<<" is the largest element in the array"<<endl;
    
    return 0;
}