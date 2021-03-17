//median using Randomise Quick sort
// Time Complexity: o(nlogn)
#include <bits/stdc++.h>
using namespace std;

void randomise(int arr[], int l, int h){
    int n = h-l+1;
    int temp = rand()%n;
    swap(arr[l+temp], arr[h]);
}

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int a[], int l, int h){
    if (l < h){
        randomise(a,l,h);
        int pivot = partition(a, l, h);
        quickSort(a, l, pivot - 1);
        quickSort(a, pivot, h);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        quickSort(arr, 0, n - 1); 
        if(n%2 ==0){
            cout<<arr[n/2];
        }
        else{
            cout<<(arr[n/2]+arr[1+n/2])/2;
        }
    }
    
    return 0;
}


// 2
// 6      
// 5 3 1 7 8 4
// 5
// 7 6 5 43 2
// 6