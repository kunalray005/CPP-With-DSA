#include<iostream> 
using namespace std;
void alterSwap(int arr[],int size){
    int start=0;
    int second=1;
    while(second<size){
        int temp=arr[start];
        arr[start]=arr[second];
        arr[second]=temp;
        start+=2;
        second+=2;
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

    alterSwap(arr,10);
    printArray(arr,10);

     
    alterSwap(brr,9);
    printArray(brr,9);
}