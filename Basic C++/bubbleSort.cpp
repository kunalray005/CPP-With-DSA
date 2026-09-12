#include<iostream>
using namespace std;
// void bubbleSort(int arr[],int size){
//     for(int i=0;i<size;i++){
//         bool flag=false;
//         for(int j=0;j<size-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//                 flag=true;

//             }
            
//         }
//         if(flag==false){
//                 break;
//             }
//     }
// }
void bubbleSort(int arr[],int size){
    for(int i=0;i<size;i++){
        bool flag=false;
        for(int j=0;j<size-1-i;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=true;

            }
            
        }
        if(flag==false){
                break;
            }
    }
}
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n = 5;
    int arr[n]={2,45,65,7,3};
    bubbleSort(arr,5);
    display(arr,n);
}