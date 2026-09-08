#include<iostream>
using namespace std;
void reverseArray(int arr[],int size){
    int start= 0;
    int end=size-1;
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;

        end--;
    }
   
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[10]={12,34,24,22,53,23,-34,86,3,-2};
    int brr[9]={76,476,345,234,4,-87,-453,493,898765};

    reverseArray(arr,10);
    printArray(arr,10);

    
    reverseArray(brr,9);
    printArray(brr,9);
}