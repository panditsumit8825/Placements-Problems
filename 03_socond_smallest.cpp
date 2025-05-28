#include<iostream>
#include<limits.h>
#include<algorithm>
#include<vector>
using namespace std;

int secondSmallest(vector<int>& arr){
    sort(arr.begin(),arr.end());
    int i=0;
    int j =1;
    while (arr[j+1]>arr[i])
    {
        return arr[1];
    }
    return -1;
    }
int main(){
    vector<int> arr1 = {8, 8, 7, 6, 5};
    vector<int> arr2 = {10, 10, 10, 10, 10};

    cout<<secondSmallest(arr1)<<" is the secondSmallest element in the array"<<endl;
    cout<<secondSmallest(arr2)<<" is the secondSmallest element in the array"<<endl;
    return 0;
}