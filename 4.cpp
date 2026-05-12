#include <iostream>
#include <vector>
#include <string>
using namespace std;

void greet(const vector<string>& names) {
    cout << "\nHello ";
    for (const string& n : names) {
        cout << n << " ";
    }
    cout << "!" << endl;
}

int main() {
    int count;
    cout << "How many names do you have? ";
    cin >> count;

    vector<string> names(count);
    for (int i = 0; i < count; i++) {
        cout << "Enter name #" << (i + 1) << ": ";
        cin >> names[i];
    }

    greet(names);

    return 0;
}
