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
    // Insert into array
    cout<<"Enter position you want to insert"<<endl;
    cin>>pos;

    cout<<"Enter value you want to enter"<<endl;
    cin>>value;

    for(i=size-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=value;
    size++;

    //Array after traversal
    display(arr,size);




    //insert at begging or index 0
    for(i=size-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=value;
    size++;
    cout<<"At begining"<<endl;
    display(arr,size);



    //at end
    arr[size]=value;give code
    size++;
    cout<<"At end "<<endl;
    display(arr,size);


}