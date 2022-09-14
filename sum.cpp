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

int sum(int a[], int length){
    int total = 0;
    for(int i=0; i<length; i++){
        total = total + a[i];
    }
    return total;
}

// Sum of array using recursion
int R_sum(int A[], int n){
    if(n<0){
        return 0;
    }
    else{
        return sum(A,n-1)+A[n-1];
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
    cout<<"\nSum of array is - "<<sum(arr,size);
    int s = R_sum(arr,size);
    cout<<"\nSum of array is - "<<s;
    return 0;
}