#include<iostream>
using namespace std;
class school{
    public:
    string name;
    void setschool(){
    cout<<"enter your school name: "<<endl;
    cin>>name;
    }
};
class student:public school{
    public:
    string name;
    void setstudent(){
    cout<<"enter your student name: "<<endl;
    cin>>name;
    }

};
int main() {
    school s;
    s.setschool();
    student n;
    n.setstudent();
    return 0;
};  