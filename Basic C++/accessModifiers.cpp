#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rollno;
    Student(){
        //default
    }

    Student(string s,int r,float g){           //parametarised constructor
        name=s;
        rollno=r;
        gpa=g;
    }

    float getGpa(){                           // to print gpa despite being private
        return gpa;
    }

    void setGpa(float g){                     // set/modify gpa despite being private
        gpa=g;
    }
private:
    float gpa;
};

int main(){
    Student s1("Kunal Ray",25,9.8);
    cout<<s1.getGpa()<<endl;
    s1.setGpa(9.56);
    cout<<s1.getGpa()<<endl;
    cout<<s1.name<<endl;

}