#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    float c;
    while(i<=n){
        c=(i-32)*5.0/9.0;
        cout<<i<< " F "<<"= "<<c<< " C "<<endl;
        i++;
    }   
}
 