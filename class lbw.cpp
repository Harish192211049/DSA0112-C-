#include <iostream>
using namespace std;

class Box {
public:
    double length, width, height;  // Public members

    // Function to calculate volume
    double volume() {
        return length * width * height;
    }
};

int main() {
    Box box;

    // Set dimensions
    box.length = 5.0;
    box.width = 3.0;
    box.height = 2.0;

    // Display volume
    cout << "Volume of the box: " << box.volume() << endl;

    return 0;
}

