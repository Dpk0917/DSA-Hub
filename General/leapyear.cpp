#include <iostream>
using namespace std;

int main() {
    int year;
    // Input
    cin >> year;

    // Check leap year condition
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << "Leap year" << endl;
    } else {
        cout << "Not a leap year" << endl;
    }

    return 0;
}
