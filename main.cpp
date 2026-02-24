#include <iostream>
using namespace std;
class person{
    private:
    string name;
    int age;
    public:
    void setperson(){
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"enter your age "<<endl;
    cin>>age;
    }
};
class student:public person{
    private:
    string grade;
    public:
    void setstudent(){
    cout<<"enter student grade"<<endl;
    cin>>grade;
    }
};
int main() {
    person p;
    p.setperson();
    student s;
    s.setstudent();

    return 0;
};
