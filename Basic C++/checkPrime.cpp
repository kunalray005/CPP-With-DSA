#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool notprime=false;
    for(int i=2;i<n;i++){
        if(n%i==0){
            notprime=true;
            break;
        }
    }
    if(n==1 or n==0){
        cout<<"NOt Prime Number"<<endl;
    }
    else if(notprim){
        cout<<"NOt Prime Number"<<endl;
    }
    else{
        cout<<"Prime Number "<<endl;
    }
}