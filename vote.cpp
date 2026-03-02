#include<iostream>
using namespace std;
class Vote{
    public:
    int age;
    void checkvote(){
        cout<<"enter your age: "<<endl;
        cin>>age;
        if(age>=18)
        cout<<"you are allow to vote"<<endl;
        else
        cout<<"you are not allow to vote"<<endl;
    }
};
int main(){
    Vote v;
    v.checkvote();
    return 0;
};