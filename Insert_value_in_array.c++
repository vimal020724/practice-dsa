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

void insert(int array[], int size, int index, int value){
    for(int i=size; i>index; i--){
        array[i]=array[i-1];
    }
    array[index]=value;
}

int main(){
    int size;
    cout<<"Enter size of array ";
    cin>>size;
    int arr[size];
    inputArray(arr,size);
    cout<<"Array is ";
    PrintArray(arr,size);
    cout<<"\n Enter the value and index where you wants to insert ";
    int index,value;
    cin>>value>>index;
    insert(arr,size,index,value);
    size++;
    PrintArray(arr,size);
    return 0;
}