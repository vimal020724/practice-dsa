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

bool BinarySearch(int a[], int start, int end, int key){
    
    while (start<=end)
    {
        int mid = (start+end)/2;
        if(key==a[mid]){
            return true;
        }
        else if(key>mid){
            start = mid+1;
        }
        else if(key<mid){
            end = mid-1;
        }
    }
    return false;
}

//Recursive algorithms for binary search
bool R_BinarySearch(int a[], int start, int end, int key){
    if(start<=end){
        int mid = (start+end)/2;
        if(key==a[mid]){
            return true;
        }
        else if(key<a[mid]){
            return R_BinarySearch(a,start,mid-1,key);
        }
        else{
            return R_BinarySearch(a,mid+1,end,key);
        }
    }
    return false;
}


int main(){
    int size;
    cout<<"Enter the number of element in array ";
    cin>>size;
    int arr[size];
    inputArray(arr,size);
    cout<<"Array is ";
    PrintArray(arr,size);
    int key;
    cout<<"\nEnter the element which you wants to search ";
    cin>>key;
    int start = 0;
    int end = size-1;
    int found = BinarySearch(arr,start,end,key);
     if(found){
        cout<<"Key is present in array"<<endl;
    }
    else{
        cout<<"Key is not present in array"<<endl;
    }

    int Rfound= R_BinarySearch(arr,start,end,key);
    if(Rfound){
           cout<<"Key is present in array"<<endl;
    }
    else{
        cout<<"Key is not present in array"<<endl;
    }
    

    return 0;
}