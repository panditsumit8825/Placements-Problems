#include<iostream.h>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;

    // int sortArr(vector<int>& arr){
    //     sort(arr.begin(), arr.end());
    //     return arr[0];
    // }
// int main(){
//     vector<int> arr1= {2,5,1,3,0};
//     vector<int> arr2={8,10,5,7,9};
//     cout<<sortArr(arr1)<<" is the smallest element in the array"<<endl;
//     cout<<sortArr(arr2)<<" is the smallest element in the array"<<endl;

//     return 0;
// }

// M-2

int main(){
    int arr1[] = {2,5,1,3,0};
    int n= sizeof(arr1)/sizeof(int);
    // vector<int> arr1= {2,5,1,3,0};
    // vector<int> arr2={8,10,5,7,9};
    // cout<<sortArr(arr1)<<" is the smallest element in the array"<<endl;
    // cout<<sortArr(arr2)<<" is the smallest element in the array"<<endl;
     
    int max= INT_MIN;
    for (int i = 0; i <n; i++)
    {
        if (arr1[i]>INT_MIN)
        {
            max = arr1[i];
        }
        
    }
    cout<<max<<" is the smallest element in the array"<<endl;
    return 0;
}