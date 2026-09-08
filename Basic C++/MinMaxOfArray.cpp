#include<iostream>
#include <climits>
using namespace std;
int maxArray(int arr[],int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int minArray(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
} 
int main(){
    int arr[5]={-31,5,67,8789,6};
    int size=5;
    int result = maxArray(arr,size);
    cout<<"Maximum of array is: "<<result<<endl;
    int minimum=minArray(arr,size);
    cout<<"Minimum of array is: "<<minimum<<endl;
}