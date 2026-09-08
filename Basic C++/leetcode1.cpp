#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int product=1;
    int sum=0;
    while(n!=0){        
        int lastDigit=n%10;
        sum+=lastDigit;
        product*=lastDigit;
        n=n/10;
    }
    int result=product-sum;
    cout<<"Answer is: "<< result<<endl;
}