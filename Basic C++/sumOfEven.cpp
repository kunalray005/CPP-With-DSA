#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int Evensum=0;
    int i=1;
    while(i<=n){
        if(i%2==0){
            Evensum+=i;

        }
    i++;
    }
    cout<<"Sum is "<<Evensum<<endl;
}