#include<iostream.h>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;

int reverseArray(vector<int>& arr){
    // int size = arr.size();
    // int start = 0;
    // int end = size-1;
    // while(start<=end)
    // {
    //     swap(arr[start],arr[end]);
    //     start ++;
    //     end --;
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
    // return arr[size];
    // return arr[i];
}
int main(){
    // vector<int> arr = {5,4,3,2,1};
    vector<int> arr = {10,20,30,40};
    int size = arr.size();
    int start = 0;
    int end = size-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start ++;
        end --;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    // cout<<reverseArray(arr1)<<" is the reverseArray"<<endl;
    // cout<<reverseArray(arr2)<<" is the reverseArray"<<endl;

    return 0;
}