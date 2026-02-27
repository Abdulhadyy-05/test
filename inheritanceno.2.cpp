#include <iostream>
using namespace std;

class Father {
public:
    void setfather() {
        cout << "Father's name" << endl;
    }
};

class Mother {
public:
    void setmother() {
        cout << "Mother's name" << endl;
    }
};

class Child : public Father, public Mother {
public:
    void setchild() {
        cout << "Child's name" << endl;
    }
};

int main() {
    Child c;
    c.setfather();   
    c.setmother();   
    c.setchild();
    return 0;
}
