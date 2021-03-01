// INSERTION SORT

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,j,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
            cin>>arr[i];
    }
    for(int i=1;i<n;i++){ //we consider arr[0] is already sorted
        key=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key){
           arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        }
    cout<<"The Sorted Array is:"<<endl;
    for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
    }
    return 0;
} 

// 6
// 25 4 7 22 1 3
// The Sorted Array is:
// 1 3 4 7 22 25