#include<iostream>
#include<limits.h>
#include<algorithm>
#include<vector>
using namespace std;

int secondLargest(vector<int>& arr){
    sort(arr.begin(),arr.end());
    // int i=0;
    // int j =1;
    int n = arr.size();
    // int n = sizeof(arr)/sizeof(int);
    // while (arr[n-1]>arr[n-2])
    // {
    //     return arr[n];
    // }
    // return -1;
    // }
      for (int i = n - 2; i >= 0; i--) {
      
        // return the first element which is not equal to the 
        // largest element
        if (arr[i] != arr[n - 1]) {
            return arr[i];
        }
    }
  
    // If no second largest element was found, return -1
    return -1;
}
int main(){
    vector<int> arr1 = {8, 8, 7, 6, 5};
    vector<int> arr2 = {10, 10, 10, 10, 10};
    // int n = sizeof(arr)/sizeof(int);

    cout<<secondLargest(arr1)<<" is the secondLargest element in the array"<<endl;
    cout<<secondLargest(arr2)<<" is the secondLargest element in the array"<<endl;
    return 0;
}