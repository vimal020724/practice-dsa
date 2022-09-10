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

bool linear_search(int arr[], int size,int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;

}
int main(){
    int size;
    cout<<"Enter size of array ";
    cin>>size;
    int arr[size];
    inputArray(arr,size);
    cout<<"Array is ";
    PrintArray(arr,size);
    int key;
    cout<<"\nEnter key which you want to search ";
    cin>>key;
    int found =linear_search(arr,size,key);
    if(found){
        cout<<"Key is present in array"<<endl;
    }
    else{
        cout<<"Key is not present in array"<<endl;
    }
    return 0;
}