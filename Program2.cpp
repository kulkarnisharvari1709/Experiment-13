#include <iostream>
using namespace std;

class Fetch {
    int num;
public:
    // Default constructor
    Fetch() {
        num = 0;
    }

    // Constructor overloading with one parameter
    Fetch(int x) {
        num = x;
    }

    // Constructor overloading with two parameters
    Fetch(int x, int y) {
        num = x + y;
    }

    void disp() {
        cout << "Number is: " << num << endl;
    }
};

int main() {
    Fetch f1;        // default constructor
    Fetch f2(5);     // single parameter
    Fetch f3(4, 6);  // two parameters

    f1.disp();
    f2.disp();
    f3.disp();

    return 0;
}
