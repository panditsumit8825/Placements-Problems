#include<iostream.h>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr= {10,5,10,15,10,5};
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                count ++;
            }
            
        }
        
    }
    cout<<count<<endl;
    return 0;
}