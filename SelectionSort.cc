// SELECTION SORT

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,min,pos;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
            cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        min=arr[i];
        pos=i;
        for(int j=i+1;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                pos=j;
            }
        }
         swap(arr[i],arr[pos]);
    }
    for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
    }
    return 0;
} 


// 6
// 4 7 2 66 84 30
// The Sorted Array is:
// 2 4 7 30 66 84