#include<iostream>
using namespace std;
class Student{
    public:
        string name;
        int age;
        int rno;
        float gpa;
        Student(){
            //default constructor
        }
         Student(string n,int a,int r){            // multiple paramentarise constructor
            name=n;
            age=a;
            rno=r;
        }

        Student(string n,int a,int r,float g){            // paramentarise constructor
            name=n;
            age=a;
            rno=r;
            gpa=g;
        }
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
    Student s1("Kunal",21,56,0.01);          // easy way to asign
    // s1.name="Kunal";
    // s1.age=21;
    // s1.rno=56;
    // s1.gpa=9.01;
    Student s2("Golu",18,47,8.91);
    Student s3;
    s3.name="Ashish";
    s3.age=25;
    s3.rno=12;
    s3.gpa=9.98;
    Student s4("Aditya",27,46);

    Student s5=s2;               // copy constructor
    s5.name="Riya";              // deep copy, changes are visible only in s5 not in s2.

    Student s6(s1);               // copy constructor
    s6.name="Aditya";             //deep copy
    





    cout<<"Before change: ";
    print(s1);
    change(s1);
    print(s1);
    change1(s1);
    cout<<"After Change: ";
    print(s1);
    print(s2);
    print(s3);
    print(s4); // gpa is garbage value as it is not assigned

    print(s5);
    print(s6);
}