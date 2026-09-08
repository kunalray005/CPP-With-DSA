#include<iostream> 
using namespace std;
void mergeArray(int arrA[],int arrB[],int arrC[],int n, int m){
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(arrA[i]<arrB[j]){
            arrC[k]=arrA[i];
            i++;
        }
        else{
            arrC[k]=arrB[j];
            j++;
        }
        k++;
    }

    while(i<n){
        arrC[k]=arrA[i];
        i++;
        k++;
    }

    while(j<m){
        arrC[k]=arrB[j];
        j++;
        k++;
    }
}

void displayArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int n;
    cout<<"Enter size of arr 1: "<<endl;
    cin>>n;
    int m;
    cout<<"Enter size of array 2: "<<endl;
    cin>>m;
    int arrA[100];
    int arrB[100];
    cout<<"Enter elemnt of array1: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arrA[i];
    }
    cout<<"Enter elemt in array2: "<<endl;
    for(int i=0;i<m;i++){
        cin>>arrB[i];
    }
    int arrC[200];
    mergeArray(arrA,arrB,arrC,n,m);
    displayArray(arrC,n+m);


    
}