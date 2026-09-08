#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int Oddsum=0;
    int i=1;
    while(i<=n){
        if(i%2!=0){
            Oddsum+=i;

        }
    i++;
    }
    cout<<"Sum is "<<Oddsum<<endl;
}