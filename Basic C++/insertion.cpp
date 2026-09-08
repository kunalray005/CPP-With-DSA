#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
       while(j>=0 && temp<arr[j]){
            arr[j+1]=arr[j];
            j--;
            
        }
        arr[j+1]=temp;
    }
}
void displayArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={23,5,67,2,1};
    int arr2[6]={26,8,7,23,90,7};
    insertionSort(arr,5);
    displayArray(arr,5);
    cout<<endl;
    
    
    insertionSort(arr2,6);
    displayArray(arr2,6);
}