#include <iostream>
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
    int marks;
    void grade(){
    cout<<"enter your marks: "<<endl;
    cin>>marks;
    if(marks>=80){
        cout<<"A"<<endl;
    }else if (marks>=70){
        cout<<"B"<<endl;
    }else if (marks>=60){
        cout<<"C"<<endl;
    }else if (marks>=50){
        cout<<"D"<<endl;
    }else{
        cout<<"fail"<<endl;;
    }
    cout<<"congratulations you have passed with grade: "<<endl;
    }
};
int main() {
    school s;
    s.setschool();
    student n;
    n.grade();
    return 0;
};