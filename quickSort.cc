#include<bits/stdc++.h>
using namespace std;

void swap(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int  partition(int a[],int l,int h){
    int pivot=a[h];
    int i=(l-1);
    for(int j=l;j<h;j++){
        if(a[j]<=pivot){
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i + 1], &a[h]);
	return (i + 1);
}

void quickSort(int arr[],int low,int high){
if(high>low){
    int pivot=partition(arr,low,high);
    quickSort(arr,low,pivot-1);
    quickSort(arr,pivot+1,high);
    }
}

void display(int array[],int length){
    for(int i=0;i<length;i++){
        cout<<array[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
            cin>>ar[i];
    }
    quickSort(ar,0,n-1);
    cout<<"The Sorted Array is:"<<endl;
    display(ar,n);
    return 0;
}



// 6
// 25 4 7 22 1 3
// The Sorted Array is:
// 1 3 4 7 22 25