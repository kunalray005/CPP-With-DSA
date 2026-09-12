#include<iostream>
using namespace std;
struct node{
    int info;
    node *next;
}*start=NULL;

node *createNode(int val){
    node *temp=new node;
    temp->info=val;
    temp->next=nullptr;
    return temp;
}

void display(){
    node *p=start;
while(p!=NULL){
        cout<<p->info<<"--->";
        p=p->next;
    }
}

int main(){
    node *t=createNode(55);
    if(start==NULL){
    start=t;}
    for(int i=0;i<3;i++){
        t=createNode(i);
        node *p=start;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=t;

    }
        display();
    }
