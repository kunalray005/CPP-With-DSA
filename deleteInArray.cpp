#include<iostream>
using namespace std;
void display(int arr[],int size){
     for(int i=0;i<size;i++){
        cout<<"Element at index "<<i<<" is "<<arr[i]<<endl;
    }
}
int main(){
    int arr[10]={23,123,24,78,46};
    int size=5;
    int i,pos,value;
    // traversal of array

    display(arr,size);
    // Delete into array
    cout<<"Enter position you want to delete"<<endl;
    cin>>pos;

    //store deleted value
    value=arr[pos];

    for(i=pos;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;

    //Array after traversal
    display(arr,size);


    //delete at begining
    for(int i=0;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;
    cout<<"At beginning"<<endl;

    display(arr,size);


    //delete at end

    size--;
    cout<<"At end"<<endl;
    display(arr,size);

}