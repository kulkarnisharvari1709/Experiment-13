#include <iostream>
using namespace std;

class Fetch {
    int num;
public:
    // Parameterized constructor with one parameter
    Fetch(int x) {
        num = x;
    }

    // Overloaded constructor with two parameters
    Fetch(int x, int y) {
        num = x + y;
    }

    void disp() {
        cout << "Number is: " << num << endl;
    }
};

int main() {
    Fetch f1(5);      // calls 1-parameter constructor
    Fetch f2(4, 6);   // calls 2-parameter constructor

    f1.disp();
    f2.disp();

    return 0;
}
