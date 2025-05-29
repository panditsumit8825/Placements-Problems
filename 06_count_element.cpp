#include<iostream.h>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<unordered_map>
using namespace std;

// void countFreq(int arr[] , int n){
//     vector<bool> visited(n,false);
//     for (int i = 0; i < n; i++)
//     {
//         if (visited[i]==true)
//         {
//             continue;
//         }
//         int count = 1;
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[i]==arr[j])
//             {
//                 visited[j]=true;
//                 count ++;
//             }
            
//         }
//         cout<<arr[i]<<" occurs "<<count<<" times in the array"<<endl;
//     }
// }
// int main(){
//     int arr[]= {10,5,10,15,10,5};
//     int n = sizeof(arr)/sizeof(int);
//     countFreq(arr,n);
   
//     return 0;
// }

// M-2

int main() {
    int arr[] = {1, 2, 2, 3, 1, 4, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> freq;

    // Count frequency of each element
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Print the frequencies
    cout << "Element Frequencies:\n";
    for (auto pair : freq) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}