#include<iostream>
using namespace std;
void insertElement(int arr[],int value,int position){
    int i=8;
    while(i>=position){
        arr[i+1]=arr[i];
        i--;
    }
    arr[position]=value;  
}
void display(int arr[]){
    for(int i=0;i<=9;i++){
        cout<<arr[i]<<" ";
    }

}

void deleteElement(int arr[],int pos){
    int i=pos;
    while(i<9){
        arr[i]=arr[i+1];
        i++;
    }
}
int main(){
    int arr[15]={1,3,5,6,7,34,46,78,67};
    int val,index,pos;        
    cout<<"Enter value to insert: ";
    cin>>val;
    cout<<"Enter at what index?? ";
    cin>>index;
    
    cout<<"After Insertion"<<endl;
    insertElement(arr,val,index);
    display(arr);
    cout<<endl;

    cout<<"Enter the index to delete: ";
    cin>>pos;
    
    cout<<"After deletion"<<endl;
    deleteElement(arr,pos);
    display(arr);
    
}