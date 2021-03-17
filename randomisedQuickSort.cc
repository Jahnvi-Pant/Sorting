// Randomise Quick sort
#include<bits/stdc++.h>
using namespace  std;

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
        quickSort(a, pivot + 1, h);
    }
}

void display(int arr[], int n){
    for (int i = 0; i < n; ++i)
        cout<<arr[i]<<" ";
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
        display(arr, n);
    }
    return 0;
}


// 2
// 5
// 66 44 2 8 3
// 2 3 8 44 66 
// 4
// 3 99 2 1
// 1 2 3 99