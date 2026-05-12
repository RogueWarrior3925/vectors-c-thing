#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> colors;
    string color, again;

    do {
        cout << "Enter a favorite color: ";
        cin >> color;
        colors.push_back(color);

        cout << "Add another? (yes/no): ";
        cin >> again;

    } while (again == "yes");

    cout << "\nYour favorite colors:" << endl;
    for (string c : colors) {
        cout << c << endl;
    }

    return 0;
}
