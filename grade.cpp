#include <iostream>
using namespace std;
class student{
    public:
    string name;
    void setstudent(){
    cout<<"enter your student name: "<<endl;
    cin>>name;
    }
};
class number:public student{
    public:
    int marks;
    void grade(){
    cout<<"enter your marks: "<<endl;
    cin>>marks;
    if(marks>=80){
        cout<<"A";
    }else if (marks>=70){
        cout<<"B";
    }else if (marks>=60){
        cout<<"C";
    }else if (marks>=50){
        cout<<"D";
    }else{
        cout<<"fail";
    }
    }
};
int main() {
    student s;
    s.setstudent();
    number n;
    n.grade();
    return 0;
};
