#include<bits/stdc++.h>
using namespace std;

void inputArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
}

void PrintArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void DeleteArray(int arr[],int size, int index){
    for(int i=index; i<size-1; i++){
        arr[i]=arr[i+1];
    }
}

int main(){
    int size;
    cout<<"Enter size of array ";
    cin>>size;
    int arr[size];
    inputArray(arr,size);
    cout<<"Array is ";
    PrintArray(arr,size);
    cout<<"\n Enter index ";
    int index;
    cin>>index;
    DeleteArray(arr,size,index);
    size--;
    PrintArray(arr,size);


    return 0;
}