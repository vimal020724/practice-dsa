#include<bits/stdc++.h>
using namespace std;

void inputArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<"Element No "<<i<<" is - ";
        cin>>arr[i];
    }
}

void PrintArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int min_num(int *min, int a[], int size){
    for(int i=0; i<size; i++){
        if(a[i]< *min){
            *min = a[i];
        }
    }
    return *min;
}

int main(){
    int size;
    cout<<"Enter the number of element in array ";
    cin>>size;
    int arr[size];
    inputArray(arr,size);
    cout<<"Array is ";
    PrintArray(arr,size);
    cout<<endl;
    int min = arr[0];
    min_num(&min, arr, size);
    cout<<"Min number is - "<<min;

    return 0;
}