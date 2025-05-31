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

// int main() {
//     int arr[] = {1, 2, 2, 3, 1, 4, 2, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     unordered_map<int, int> freq;

//     // Count frequency of each element
//     for (int i = 0; i < n; i++) {
//         freq[arr[i]]++;
//     }

//     // Print the frequencies
//     cout << "Element Frequencies:\n";
//     for (auto pair : freq) {
//         cout << pair.first << " -> " << pair.second << endl;
//     }

//     return 0;
// }

// C++ program to check if a given
// year is leap year or not
// #include <iostream>
// using namespace std;

// bool checkYear(int year)
// {
//     // leap year
//     if (year % 400 == 0)
//         return true;

//     // Not leap year
//     if (year % 100 == 0)
//         return false;

//     // leap year
//     if (year % 4 == 0)
//         return true;

//     // Not leap year
//     return false;
// }

// int main()
// {
//     int year = 2000;

//     if (checkYear(year))
//         cout << "Leap Year";
//     else
//         cout << "Not a Leap Year";
//     return 0;
// }

// C++ Program to check
// if number is Armstrong
// or not
#include <iostream>
using namespace std;

int main()
{
    int n = 153;
    int temp = n;
    int ans = 0;

    // function to calculate
    // the sum of individual digits
    while (n > 0) {

        int rem = n % 10;
        ans = (ans) + (rem * rem * rem);
        n = n / 10;
    }

    // condition to check
    if (temp == ans) {
        cout << ("Yes, it is Armstrong Number");
    }
    else {
        cout << ("No, it is not an Armstrong Number");
    }
    return 0;
}