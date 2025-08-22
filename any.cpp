
#include <iostream>
using namespace std;

class Box {
    private:
        double width;
    public:
        Box() : width(0) {}
        void setWidth(double w) {
            width = w;
        }
        // Friend function declaration
        friend void printWidth(Box);
};

// Friend function definition
void printWidth(Box b) {
    cout << "Width of box: " << b.width << endl;
}

int main() {
    Box box;
    box.setWidth(10.5);
    printWidth(box);
    return 0;
}

