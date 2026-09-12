// // #include<iostream>
// // using namespace std;
// // int main(){
// //     // cout<<"Hello World!! "<<endl;
// //     // int a;
// //     // cin>>a;
// //     // cout<<a<<endl;
// //     cout<<"Hello this is C++"<<endl;


// //     int num=30;
// //     double num2=983.833;
// //     char ch='A';

// //     cout<<num<<endl;
// //     cout<<num2<<endl;
// //     cout<<"Character is: "<<ch<<endl;
// // }

 

// // #include<iostream>
// // using namespace std;
// // class circle{
// //     public:
// //         double radius;
// //         double compute_area(){
// //             return 3.14*radius*radius;
// //         }

// // };
// // int main(){
// //     circle obj;
// //     obj.radius = 5.5;
// //     cout<<"Radius is: "<<obj.radius<<endl;
// //     cout<<"Area is: "<<obj.compute_area();
// //     return 0;
// // }




// // #include<iostream>
// // using namespace std;

// // class Circle {
// // private:
// //     double radius;

// // public:
// //     void compute_area(double r) {
// //         radius = r;

// //         double area = 3.14 * radius * radius;

// //         cout << "Radius is: " << radius << endl;
// //         cout << "Area is: " << area << endl;
// //     }
// // };

// // int main() {
// //     Circle obj;
// //     obj.compute_area(1.5);

// //     return 0;
// // }


// // #include<iostream>
// // #include<cstring>
// // using namespace std;
// // struct Employee{
// //     char name[20];
// //     int age;
// //     float salary;

// // };
// // int main(){
// //     Employee Emp1;
// //     // strcpy(E1.name,"Kunal");
// //     // E1.age=21;
// //     // E1.salary=25364.978;
// //     cout<<"Enter your name"<<endl;
// //     cin.get(Emp1.name,30);            //cin only first name without space, but cin.get(E1.name,30) --> whole name including sapce

// //     cout<<"Enter your age"<<endl;
// //     cin>>Emp1.age;

// //     cout<<"Enter your salary"<<endl;
// //     cin>>Emp1.salary;

// //     cout<<"Name: "<<Emp1.name<<endl;
// //     cout<<"Age: "<<Emp1.age<<endl;
// //     cout<<"Salary: "<<Emp1.salary<<endl;

// // // }
// // #include <iostream>
// // using namespace std;

// // class Student {
// // public:
// //     static int count;

// //     Student() {
// //         count++;
// //     }
// // };

// // int Student::count = 0;

// // int main() {   
// //     Student s1;
// //     Student s2;
// //     Student s3;

// //     cout << "Number of students: " << Student::count;

// //     return 0;
// //}


// // #include<iostream>
// // using namespace std;
// // float Area(int r){
// //     return 3.14*r*r;
// // }

// // int main(){
// //     int r;
// //     float result;
// //     cin>>r;
// //     result=Area(r);
// //     cout<<"Area :"<<result;
// // }
// #include<iostream>
// using namespace std;
// void sum(int,int);
// void sum(double,double);
// void sum(char,char);
// int main(){
//     int a=10,b=20;
//     double c=7.56,d=984.65;

//     char e='a',f='k';
//     sum(a,b);
//     sum(c,d);
//     sum(e,f);
// }

// void sum(int x,int y){
//     cout<<"\n Sum of intergers: "<<x+y;
// }

// void sum(double x,double y){
//     cout<<"\n Sum of double: "<<x+y;
// }

// void sum(char x,char y){
//     cout<<"\n Sum of character: "<<x+y;
// }



// {
//     int a,b;
//     public:
//         b    
// }
// #include<iostream>
// using namespace std;
// class demo{
//     private:
//         int x,y;
//         public:
//         demo(int a,int b ){
//             x=a;
//             y=b;
//         }
//         friend class demo1;
// };

// class demo1{
//     public:
// void display(demo d1){
//     cout<<"X Is="<<d1.x;
//     cout<<"y is="<<d1.y;
// }
// };

// main(){
//     demo d2(10,40);
//     demo1 f1;
//     f1.display(d2);
// }
