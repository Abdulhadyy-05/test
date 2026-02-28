#include <iostream>
using namespace std;

class Person {
public:
    void show() {
        cout << "Hello" << endl;
    }
};

class Check : public Person {
public:
    void checkAge(int x) {
        if (x >= 18)
            cout << "Legal" << endl;
        else
            cout << "Illegal" << endl;
    }
};

int main() {
    Check c;
    c.show();        
    c.checkAge(6);   

    return 0;
}
