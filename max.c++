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

int Max_num(int a[], int length, int m){
    for(int i=0; i<length; i++){
        if(a[i]>m){
            m = a[i];
        }
    }
    return m;
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
    int max = arr[0];
    int maxi = Max_num(arr,size,max);
    cout<<"Max number is - "<<maxi;

    return 0;
}