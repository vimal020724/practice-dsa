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

void reverse(int a[], int n){
    int j=n-1;
    for(int i=0; i<j; i++){
        int temp = a[i];
        a[i]=a[j];
        a[j] = temp;
        j--;
    }
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
    reverse(arr,size);
    PrintArray(arr,size);
    return 0;
}