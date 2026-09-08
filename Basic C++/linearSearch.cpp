#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int val){
    for(int i=0;i<size;i++){
        if(val==arr[i]){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]={12,34,24,22,53,23,-34,86,3,-2};
    int value;
    cin>>value;
    int ressult=linearSearch(arr,10,value);
    if(ressult){
        cout<<"Elemnt found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
}