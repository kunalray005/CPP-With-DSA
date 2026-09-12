#include<iostream>
using namespace std;
class Student{
    public:
        string name;
        int age;
        int rno;
        float gpa;
};

void print(Student s){
    cout<<s.name<<" "<<s.age<<" "<<s.rno<<" "<<s.gpa<<endl;
}

void change(Student s){
    s.name="Rahul";         //pass by value, no change
}

void change1(Student& s){
    s.name="Rahul";         //pass by refernce, yes to change
}
int main(){
    Student s1;
    s1.name="Kunal";
    s1.age=21;
    s1.rno=56;
    s1.gpa=9.01;

    print(s1);
    change(s1);
    print(s1);
    change1(s1);
    print(s1);
}