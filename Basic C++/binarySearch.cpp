#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int target){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(target<arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

int main(){
    int n=5;
    int arr[n]={2,5,8,12,56};
    int target=56;
    int result=binarySearch(arr,n,target);
    //cout<<result<<endl;
    if(result!=-1){
        cout<<"Element present at index: "<<result;
    }
    else{
        cout<<"Elemt not present";
    }
}